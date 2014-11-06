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
public class TestrGenBuiltinacosh extends TestBase {

    @Test
    @Ignore
    public void testacosh1() {
        assertEval("argv <- list(FALSE);acosh(argv[[1]]);");
    }

    @Test
    @Ignore
    public void testacosh2() {
        assertEval("argv <- list(logical(0));acosh(argv[[1]]);");
    }

    @Test
    @Ignore
    public void testacosh3() {
        assertEval("argv <- list(structure(numeric(0), .Dim = c(0L, 0L)));acosh(argv[[1]]);");
    }

    @Test
    @Ignore
    public void testacosh4() {
        assertEval("argv <- list(c(0+2i, 0.0001+2i, 0-2i, 0-2.0001i));acosh(argv[[1]]);");
    }

    @Test
    @Ignore
    public void testacosh5() {
        assertEval("argv <- list(c(10.0676619957778, 9.77014619112734, 9.48151278613522, 9.20149937354487, 8.92985138285227, 8.66632184886646, 8.41067118718443, 8.16266697637608, 7.92208374668136, 7.68870277502741, 7.46231188617936, 7.242705259844, 7.02968324355098, 6.82305217114139, 6.62262418669875, 6.42821707376226, 6.23965408966708, 6.05676380486112, 5.87937994705209, 5.70734125004322, 5.54049130712027, 5.37867842885638, 5.22175550520566, 5.06957987175999, 4.92201318004762, 4.77892127175541, 4.64017405676061, 4.50564539486112, 4.3752129810968, 4.24875823455752, 4.12616619057689, 4.00732539621364, 3.89212780892567, 3.78046869834458, 3.67224655106143, 3.56736297833717, 3.46572262665382, 3.36723309102506, 3.27180483098748, 3.17935108919603, 3.0897878125497, 3.00303357577581, 2.91900950740325, 2.83763921805753, 2.75884873101238, 2.68256641493482, 2.60872291876243, 2.53725110865378, 2.46808600695458, 2.40116473312406, 2.33642644656803, 2.27381229132637, 2.21326534256499, 2.1547305548233, 2.09815471197041, 2.04348637882435, 1.99067585439045, 1.93967512667636, 1.89043782904258, 1.84291919804882, 1.7970760327579, 1.75286665546022, 1.71025087378301, 1.66918994414995, 1.62964653655797, 1.59158470063915, 1.55496983297695, 1.51976864564695, 1.48594913595357, 1.45348055733525, 1.42233339141161, 1.39247932114721, 1.36389120510748, 1.33654305278346, 1.31041000096287, 1.28546829112601, 1.26169524784609, 1.23906925817407, 1.21756975198963, 1.19717718330002, 1.17787301247016, 1.15963968936754, 1.14246063740672, 1.12632023847902, 1.11120381875343, 1.09709763533618, 1.0839888637765, 1.07186558640748, 1.06071678151125, 1.05053231329877, 1.04130292269496, 1.033020218921, 1.02567667186589, 1.01926560524059, 1.01378119050839, 1.00921844158588, 1.00557321031002, 1.00284218266684, 1.00102287577853, 1.00011363564622, 1.00011363564622, 1.00102287577853, 1.00284218266684, 1.00557321031002, 1.00921844158588, 1.01378119050839, 1.01926560524059, 1.02567667186589, 1.033020218921, 1.04130292269496, 1.05053231329877, 1.06071678151125, 1.07186558640748, 1.0839888637765, 1.09709763533618, 1.11120381875343, 1.12632023847902, 1.14246063740672, 1.15963968936754, 1.17787301247016, 1.19717718330002, 1.21756975198963, 1.23906925817407, 1.26169524784609, 1.28546829112601, 1.31041000096287, 1.33654305278346, 1.36389120510748, 1.39247932114721, 1.42233339141161, 1.45348055733525, 1.48594913595357, 1.51976864564695, 1.55496983297695, 1.59158470063915, 1.62964653655796, 1.66918994414995, 1.71025087378301, 1.75286665546022, 1.7970760327579, 1.84291919804882, 1.89043782904258, 1.93967512667636, 1.99067585439045, 2.04348637882435, 2.09815471197041, 2.1547305548233, 2.21326534256499, 2.27381229132637, 2.33642644656803, 2.40116473312406, 2.46808600695458, 2.53725110865378, 2.60872291876243, 2.68256641493482, 2.75884873101238, 2.83763921805753, 2.91900950740325, 3.00303357577581, 3.0897878125497, 3.17935108919602, 3.27180483098748, 3.36723309102506, 3.46572262665381, 3.56736297833717, 3.67224655106143, 3.78046869834458, 3.89212780892567, 4.00732539621364, 4.12616619057689, 4.24875823455752, 4.3752129810968, 4.50564539486111, 4.64017405676061, 4.77892127175541, 4.92201318004762, 5.06957987175999, 5.22175550520565, 5.37867842885638, 5.54049130712027, 5.70734125004322, 5.87937994705209, 6.05676380486112, 6.23965408966708, 6.42821707376226, 6.62262418669875, 6.82305217114139, 7.02968324355097, 7.242705259844, 7.46231188617936, 7.68870277502741, 7.92208374668136, 8.16266697637608, 8.41067118718443, 8.66632184886646, 8.92985138285226, 9.20149937354487, 9.48151278613522, 9.77014619112734, 10.0676619957778));acosh(argv[[1]]);");
    }
}
