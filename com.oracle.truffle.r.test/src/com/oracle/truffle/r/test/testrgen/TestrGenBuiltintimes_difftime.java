/*
 * This material is distributed under the GNU General Public License
 * Version 2. You may review the terms of this license at
 * http://www.gnu.org/licenses/gpl-2.0.html
 * 
 * Copyright (c) 2014, Purdue University
 * Copyright (c) 2014, Oracle and/or its affiliates
 * All rights reserved.
 */
package com.oracle.truffle.r.test.testrgen;

import org.junit.*;

import com.oracle.truffle.r.test.*;

// Checkstyle: stop line length check

                                                                 public class TestrGenBuiltintimes_difftime extends TestBase {

	@Test
	public void testtimes_difftime1() {
		assertEval(Ignored.Unknown, "argv <- structure(list(e1 = 2, e2 = structure(c(3.33333333333333,     683.25), units = \'mins\', class = \'difftime\')), .Names = c(\'e1\',     \'e2\'));"+
			"do.call(\'*.difftime\', argv)");
	}

}

