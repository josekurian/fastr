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
public class TestrGenBuiltinabbreviate extends TestBase {

    @Test
    public void testabbreviate1() {
        assertEval(Ignored.Unknown, "argv <- list(\'text\', 6, TRUE); .Internal(abbreviate(argv[[1]], argv[[2]], argv[[3]]))");
    }

    @Test
    public void testabbreviate2() {
        assertEval(Ignored.Unknown, "argv <- list(c(\'Alabama\', \'Alaska\', \'Arizona\', \'Arkansas\', \'California\', \'Colorado\', \'Connecticut\', \'Delaware\', \'Florida\', \'Georgia\', \'Hawaii\', \'Idaho\', \'Illinois\', \'Indiana\', \'Iowa\', \'Kansas\', \'Kentucky\', \'Louisiana\', \'Maine\', \'Maryland\', \'Massachusetts\', \'Michigan\', \'Minnesota\', \'Mississippi\', \'Missouri\', \'Montana\', \'Nebraska\', \'Nevada\', \'New Hampshire\', \'New Jersey\', \'New Mexico\', \'New York\', \'North Carolina\', \'North Dakota\', \'Ohio\', \'Oklahoma\', \'Oregon\', \'Pennsylvania\', \'Rhode Island\', \'South Carolina\', \'South Dakota\', \'Tennessee\', \'Texas\', \'Utah\', \'Vermont\', \'Virginia\', \'Washington\', \'West Virginia\', \'Wisconsin\', \'Wyoming\'), 3, TRUE); .Internal(abbreviate(argv[[1]], argv[[2]], argv[[3]]))");
    }

    @Test
    public void testabbreviate3() {
        assertEval(Ignored.Unknown, "argv <- list(\'glm\', 6, TRUE); .Internal(abbreviate(argv[[1]], argv[[2]], argv[[3]]))");
    }

    @Test
    public void testabbreviate4() {
        assertEval(Ignored.Unknown, "argv <- list(c(\'(Intercept)\', \'sin(2 * pi * Time)\', \'cos(2 * pi * Time)\'), 6, TRUE); .Internal(abbreviate(argv[[1]], argv[[2]], argv[[3]]))");
    }

    @Test
    public void testabbreviate5() {
        assertEval(Ignored.Unknown, "argv <- list(c(\'Alabama\', \'Alaska\', \'Arizona\', \'Arkansas\', \'California\', \'Colorado\', \'Connecticut\', \'Delaware\', \'Florida\', \'Georgia\', \'Hawaii\', \'Idaho\', \'Illinois\', \'Indiana\', \'Iowa\', \'Kansas\', \'Kentucky\', \'Louisiana\', \'Maine\', \'Maryland\', \'Massachusetts\', \'Michigan\', \'Minnesota\', \'Mississippi\', \'Missouri\', \'Montana\', \'Nebraska\', \'Nevada\', \'New Hampshire\', \'New Jersey\', \'New Mexico\', \'New York\', \'North Carolina\', \'North Dakota\', \'Ohio\', \'Oklahoma\', \'Oregon\', \'Pennsylvania\', \'Rhode Island\', \'South Carolina\', \'South Dakota\', \'Tennessee\', \'Texas\', \'Utah\', \'Vermont\', \'Virginia\', \'Washington\', \'West Virginia\', \'Wisconsin\', \'Wyoming\'), 4L, TRUE); .Internal(abbreviate(argv[[1]], argv[[2]], argv[[3]]))");
    }

    @Test
    public void testabbreviate6() {
        assertEval(Ignored.Unknown, "argv <- list(c(\'Alabama\', \'Alaska\', \'Arizona\', \'Arkansas\', \'California\', \'Colorado\', \'Connecticut\', \'Delaware\', \'Florida\', \'Georgia\', \'Hawaii\', \'Idaho\', \'Illinois\', \'Indiana\', \'Iowa\', \'Kansas\', \'Kentucky\', \'Louisiana\', \'Maine\', \'Maryland\', \'Massachusetts\', \'Michigan\', \'Minnesota\', \'Mississippi\', \'Missouri\', \'Montana\', \'Nebraska\', \'Nevada\', \'New Hampshire\', \'New Jersey\', \'New Mexico\', \'New York\', \'North Carolina\', \'North Dakota\', \'Ohio\', \'Oklahoma\', \'Oregon\', \'Pennsylvania\', \'Rhode Island\', \'South Carolina\', \'South Dakota\', \'Tennessee\', \'Texas\', \'Utah\', \'Vermont\', \'Virginia\', \'Washington\', \'West Virginia\', \'Wisconsin\', \'Wyoming\'), 3L, TRUE); .Internal(abbreviate(argv[[1]], argv[[2]], argv[[3]]))");
    }

    @Test
    public void testabbreviate7() {
        assertEval(Ignored.Unknown, "argv <- list(c(\'1_\', \'Weight\', \'Cylinders4\', \'Cylinders5\', \'Cylinders6\', \'Cylinders8\', \'Cylindersrotary\', \'TypeLarge\', \'TypeMidsize\', \'TypeSmall\', \'TypeSporty\', \'TypeVan\', \'EngineSize\', \'DriveTrainFront\', \'DriveTrainRear\'), 4L, TRUE); .Internal(abbreviate(argv[[1]], argv[[2]], argv[[3]]))");
    }

    @Test
    public void testabbreviate8() {
        assertEval(Ignored.Unknown, "argv <- list(c(\'Alabama\', \'Alaska\', \'Arizona\', \'Arkansas\', \'California\', \'Colorado\', \'Connecticut\', \'Delaware\', \'Florida\', \'Georgia\', \'Hawaii\', \'Idaho\', \'Illinois\', \'Indiana\', \'Iowa\', \'Kansas\', \'Kentucky\', \'Louisiana\', \'Maine\', \'Maryland\', \'Massachusetts\', \'Michigan\', \'Minnesota\', \'Mississippi\', \'Missouri\', \'Montana\', \'Nebraska\', \'Nevada\', \'New Hampshire\', \'New Jersey\', \'New Mexico\', \'New York\', \'North Carolina\', \'North Dakota\', \'Ohio\', \'Oklahoma\', \'Oregon\', \'Pennsylvania\', \'Rhode Island\', \'South Carolina\', \'South Dakota\', \'Tennessee\', \'Texas\', \'Utah\', \'Vermont\', \'Virginia\', \'Washington\', \'West Virginia\', \'Wisconsin\', \'Wyoming\'), 1L, TRUE); .Internal(abbreviate(argv[[1]], argv[[2]], argv[[3]]))");
    }

    @Test
    public void testabbreviate9() {
        assertEval(Ignored.Unknown, "argv <- list(character(0), 4L, TRUE); .Internal(abbreviate(argv[[1]], argv[[2]], argv[[3]]))");
    }

    @Test
    public void testabbreviate10() {
        assertEval(Ignored.Unknown, "argv <- list(\'filled.contour\', 6, TRUE); .Internal(abbreviate(argv[[1]], argv[[2]], argv[[3]]))");
    }

    @Test
    public void testabbreviate11() {
        assertEval(Ignored.Unknown, "argv <- list(c(\'Svansota\', \'No. 462\', \'Manchuria\', \'No. 475\', \'Velvet\', \'Peatland\', \'Glabron\', \'No. 457\', \'Wisconsin No. 38\', \'Trebi\'), 5, TRUE); .Internal(abbreviate(argv[[1]], argv[[2]], argv[[3]]))");
    }

    @Test
    public void testabbreviate12() {
        assertEval(Ignored.Unknown, "argv <- list(\'dtrMatrix-class\', 6, TRUE); .Internal(abbreviate(argv[[1]], argv[[2]], argv[[3]]))");
    }
}

