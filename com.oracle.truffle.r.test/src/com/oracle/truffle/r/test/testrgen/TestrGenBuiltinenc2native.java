/*
 * This material is distributed under the GNU General Public License
 * Version 2. You may review the terms of this license at
 * http://www.gnu.org/licenses/gpl-2.0.html
 * 
 * Copyright (c) 2014, Purdue University
 * Copyright (c) 2014, Oracle and/or its affiliates
 *
 * All rights reserved.
 */
package com.oracle.truffle.r.test.testrgen;

import org.junit.*;

import com.oracle.truffle.r.test.*;

// Checkstyle: stop line length check
public class TestrGenBuiltinenc2native extends TestBase {

    @Test
    public void testenc2native1() {
        assertEval(Ignored.Unknown, "argv <- list(character(0));enc2native(argv[[1]]);");
    }

    @Test
    public void testenc2native3() {
        assertEval(Ignored.Unknown, "argv <- list(structure(character(0), .Names = character(0)));enc2native(argv[[1]]);");
    }

    @Test
    public void testenc2native4() {
        assertEval(Ignored.Unknown, "argv <- list(\'José Pinheiro [aut] (S version)\');enc2native(argv[[1]]);");
    }
}

