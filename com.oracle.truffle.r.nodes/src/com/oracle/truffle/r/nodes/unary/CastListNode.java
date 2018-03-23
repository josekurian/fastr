/*
 * Copyright (c) 2013, 2018, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 */
package com.oracle.truffle.r.nodes.unary;

import com.oracle.truffle.api.dsl.Cached;
import com.oracle.truffle.api.dsl.ImportStatic;
import com.oracle.truffle.api.dsl.Specialization;
import com.oracle.truffle.api.interop.TruffleObject;
import com.oracle.truffle.api.profiles.ValueProfile;
import com.oracle.truffle.r.nodes.attributes.SpecialAttributesFunctions.SetClassAttributeNode;
import com.oracle.truffle.r.runtime.RRuntime;
import com.oracle.truffle.r.runtime.RType;
import com.oracle.truffle.r.runtime.data.RDataFactory;
import com.oracle.truffle.r.runtime.data.RFunction;
import com.oracle.truffle.r.runtime.data.RInteropScalar;
import com.oracle.truffle.r.runtime.data.RList;
import com.oracle.truffle.r.runtime.data.RNull;
import com.oracle.truffle.r.runtime.data.RPairList;
import com.oracle.truffle.r.runtime.data.RS4Object;
import com.oracle.truffle.r.runtime.data.RSymbol;
import com.oracle.truffle.r.runtime.data.model.RAbstractVector;
import com.oracle.truffle.r.runtime.env.REnvironment;
import com.oracle.truffle.r.runtime.interop.ForeignArray2R;

@ImportStatic(RRuntime.class)
public abstract class CastListNode extends CastBaseNode {

    @Child private SetClassAttributeNode setClassAttrNode;

    public abstract RList executeList(Object o);

    protected CastListNode(boolean preserveNames, boolean preserveDimensions, boolean preserveAttributes) {
        this(preserveNames, preserveDimensions, preserveAttributes, false);
    }

    protected CastListNode(boolean preserveNames, boolean preserveDimensions, boolean preserveAttributes, boolean forRFFI) {
        super(preserveNames, preserveDimensions, preserveAttributes, forRFFI);
    }

    @Override
    protected final RType getTargetType() {
        return RType.List;
    }

    @Specialization
    protected RList doNull(@SuppressWarnings("unused") RNull operand) {
        return RDataFactory.createList();
    }

    @Specialization
    protected RList doDouble(double operand) {
        return RDataFactory.createList(new Object[]{operand});
    }

    @Specialization
    protected RList doInt(int operand) {
        return RDataFactory.createList(new Object[]{operand});
    }

    @Specialization
    protected RList doAbstractVector(RAbstractVector operand,
                    @Cached("createClassProfile()") ValueProfile vectorClassProfile) {
        RAbstractVector profiledOperand = vectorClassProfile.profile(operand);
        Object[] data = new Object[profiledOperand.getLength()];
        for (int i = 0; i < data.length; i++) {
            data[i] = profiledOperand.getDataAtAsObject(i);
        }
        RList ret = RDataFactory.createList(data, getPreservedDimensions(operand), getPreservedNames(operand));
        preserveDimensionNames(operand, ret);
        if (preserveRegAttributes()) {
            ret.copyRegAttributesFrom(operand);
        }
        return ret;
    }

    @Specialization
    protected RList doPairList(RPairList pl) {
        return pl.toRList();
    }

    @Specialization
    protected RList doFunction(RFunction func) {
        return RDataFactory.createList(new Object[]{func});
    }

    @Specialization
    protected RList doEnvironment(REnvironment env) {
        return RDataFactory.createList(new Object[]{env});
    }

    @Specialization
    protected RList doS4Object(RS4Object o) {
        return RDataFactory.createList(new Object[]{o});
    }

    @Specialization
    protected RList doRSymbol(RSymbol s) {
        return RDataFactory.createList(new Object[]{s});
    }

    @Specialization
    protected RList doRInterop(RInteropScalar ri) {
        return RDataFactory.createList(new Object[]{ri});
    }

    @Specialization(guards = {"isForeignObject(obj)"})
    protected RList doForeignObject(TruffleObject obj,
                    @Cached("create()") ForeignArray2R foreignArray2R) {

        Object o = foreignArray2R.convert(obj);
        if (!RRuntime.isForeignObject(o)) {
            if (o instanceof RList) {
                return (RList) o;
            }
            return (RList) execute(o);
        }
        return RDataFactory.createList(new Object[]{obj});
    }

    public static CastListNode create() {
        return CastListNodeGen.create(true, true, true);
    }

    public static CastListNode createForRFFI(boolean preserveNames, boolean preserveDimensions, boolean preserveAttributes) {
        return CastListNodeGen.create(preserveNames, preserveDimensions, preserveAttributes, true);
    }

    protected boolean isForeignObject(TruffleObject to) {
        return RRuntime.isForeignObject(to);
    }
}
