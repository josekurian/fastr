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

                                                                 public class TestrGenBuiltinEncodingassign_ extends TestBase {

	@Test
	public void testEncodingassign_1() {
		assertEval(Ignored.Unknown, "argv <- structure(list(x = \'abc\', value = \'UTF-8\'), .Names = c(\'x\',     \'value\'));"+
			"do.call(\'Encoding<-\', argv)");
	}

}

