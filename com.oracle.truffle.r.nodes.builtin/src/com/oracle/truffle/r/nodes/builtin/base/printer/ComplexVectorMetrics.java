/*
 * Copyright (c) 2013, 2016, Oracle and/or its affiliates. All rights reserved.
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
package com.oracle.truffle.r.nodes.builtin.base.printer;

/**
 * The complex number formatting metrics. N.B. This class is public since it may be used in the
 * PrettyWriter public API.
 * 
 * @see PrettyWriter
 */
public final class ComplexVectorMetrics extends FormatMetrics {

    public final int wr;
    public final int dr;
    public final int er;
    public final int wi;
    public final int di;
    public final int ei;

    ComplexVectorMetrics(int wr, int dr, int er, int wi, int di, int ei) {
        super(wr + wi + 2);
        this.wr = wr;
        this.dr = dr;
        this.er = er;
        this.wi = wi;
        this.di = di;
        this.ei = ei;
    }

}
