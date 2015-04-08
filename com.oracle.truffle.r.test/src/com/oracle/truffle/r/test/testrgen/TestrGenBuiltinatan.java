/*
 * This material is distributed under the GNU General Public License
 * Version 2. You may review the terms of this license at
 * http://www.gnu.org/licenses/gpl-2.0.html
 *
 * Copyright (c) 2014, Purdue University
 * Copyright (c) 2014, 2015, Oracle and/or its affiliates
 *
 * All rights reserved.
 */
package com.oracle.truffle.r.test.testrgen;

import org.junit.*;

import com.oracle.truffle.r.test.*;

// Checkstyle: stop line length check
public class TestrGenBuiltinatan extends TestBase {

    @Test
    public void testatan1() {
        assertEval("argv <- list(structure(c(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0), .Names = c(\'1\', \'2\', \'3\', \'4\', \'5\', \'6\', \'7\', \'8\', \'9\', \'10\', \'11\', \'12\', \'13\', \'15\', \'16\', \'17\', \'18\', \'19\', \'20\', \'21\', \'22\', \'23\', \'24\', \'25\', \'26\', \'27\', \'28\', \'29\', \'30\', \'31\', \'32\', \'33\', \'34\', \'35\', \'36\', \'37\', \'38\', \'39\', \'40\', \'41\', \'42\', \'43\', \'44\', \'45\', \'46\', \'47\', \'48\', \'49\', \'50\', \'51\', \'52\', \'53\', \'54\', \'55\', \'56\', \'57\', \'58\', \'59\', \'60\', \'61\', \'62\', \'63\', \'64\', \'65\', \'66\', \'67\', \'68\', \'69\', \'70\', \'71\', \'72\', \'73\', \'74\', \'75\', \'76\', \'77\', \'78\', \'79\', \'80\', \'81\', \'82\', \'83\', \'84\', \'85\', \'86\', \'87\', \'88\', \'89\', \'90\', \'91\', \'92\', \'93\', \'94\', \'95\', \'96\', \'97\', \'98\', \'99\', \'100\', \'101\', \'102\', \'103\', \'104\', \'105\', \'106\', \'107\', \'108\', \'109\', \'110\', \'111\', \'112\', \'113\', \'114\', \'115\', \'116\', \'117\', \'118\', \'119\', \'120\', \'121\', \'122\', \'123\', \'124\', \'125\', \'126\', \'127\', \'128\', \'129\', \'130\', \'131\', \'132\', \'133\', \'134\', \'135\', \'136\', \'137\', \'138\', \'139\', \'140\', \'141\', \'142\', \'143\', \'144\', \'145\', \'146\', \'147\', \'148\', \'149\', \'150\', \'151\', \'152\', \'153\', \'154\', \'155\', \'156\', \'157\', \'158\', \'159\', \'160\', \'161\', \'162\', \'163\', \'164\', \'165\', \'166\', \'167\', \'168\', \'169\', \'170\', \'171\', \'172\', \'173\', \'174\', \'175\', \'176\', \'177\', \'178\', \'179\', \'180\', \'181\', \'182\', \'183\', \'184\', \'185\', \'186\', \'187\', \'188\', \'189\', \'190\', \'191\', \'192\', \'193\', \'194\', \'195\', \'196\', \'197\', \'198\', \'199\', \'200\', \'201\', \'202\', \'203\', \'204\', \'205\', \'206\', \'207\', \'208\', \'209\', \'210\', \'211\', \'212\', \'213\', \'214\', \'215\', \'216\', \'217\', \'218\', \'219\', \'220\', \'221\', \'222\', \'223\', \'224\', \'225\', \'226\', \'227\', \'228\')));atan(argv[[1]]);");
    }

    @Test
    public void testatan2() {
        assertEval("argv <- list(c(-Inf, Inf));atan(argv[[1]]);");
    }

    @Test
    public void testatan3() {
        assertEval(Ignored.Unknown, "argv <- list(c(0+2i, 0.0001+2i, 0-2i, 0-2.0001i));atan(argv[[1]]);");
    }

    @Test
    public void testatan4() {
        assertEval("argv <- list(c(1.24374261655622, 0.0991858914142951, -2.20142053912221, 2.32991997369528, -1.81371893641746, -2.23549697963848, 1.2062731926336, 0.766855355229013, 2.22205301460314, 3.00826513920171, 2.93956891545304, -0.947558891656842, -1.25682397176386, -0.535715772527751, 3.41845348048775, -0.760770219081429, -1.17237584279591, 5.89658401779422, 4.83929989447739, 1.29127425323328, 5.07843950370286, -0.812083060727, 0.688022442899665, 0.51448669913956, -0.286066209156396, -0.571116279122374, 3.99296063466557, 0.543926802451157, 10.5876703046153, -0.012750328000196, 8.35693622233428, -0.357306991432726, 4.27528487251696, 6.30217771913028, 3.89678155886045, -1.57897283794064, -2.06992463735805, 4.67986125893053, -1.26868871126894, 0.0676543743900469, 3.24354507548999, 0.242170808041476, 3.39848727561001, -0.616002138333813, 4.61847372836275, 1.27216752717472, -0.280512588403515, -0.898619929521427, -1.39985243813315, -1.28443284360156, 2.63389613373223, 6.30217771913028, 1.87342709084826, -1.09797072834446, 5.71334116764491, 13.1134896151196, 3.66949044715118, -1.08958378903637, 0.8976473859976, 0.169792654329705, 2.15662832698598, 2.85593682526588, 5.94427279099212, 3.06088249587567, 5.71334116764491, 2.35752884553298, -1.60367725265451, 0.275679954649422, 2.06745683332381, -1.66968494417226, 1.25318650417107, 10.8387072712787, 3.66949044715118, 2.11807401040277, 0.289193352142719, -1.16420273509137, 0.750915507554624, 10.8387072712787, 2.83949743554363, -1.49627880689407, 4.61847372836275, 2.52897165841403, 2.99093712861336, -1.55047774121799, 1.45900279946893, -0.889632055927773, 3.35896467002158, -1.30399295303346, 3.06088249587567, -0.951966998076272, 1.9567142584347, 4.83929989447739, 1.88517906265842, -0.640640247845954, 7.94407524992589, 2.7907339351624, 1.2062731926336, -0.037046093389687, 3.00826513920171, -0.49471891801084, 0.131065830042764, 0.742978487169905, 4.27528487251696, 2.82315118733936, 3.18752185714054, -0.335573516981329, 10.8387072712787, 0.26894691754398, 0.847902962488109, 9.94387770885966, 2.75867688212949, 1.46917954755241, 2.4562951432938, -0.308174402320662, 10.3567386812681, 2.30257280126274, -0.308174402320662, 1.41865102155398, 0.750915507554624, 0.182817981601453, 2.48514643462545, -0.447890214901362, 6.24824895102907, -0.489553106263216, 2.37143299336077, 4.71105188801319, 5.94427279099212, -0.453131097523732, -0.410935024130492, 1.36899222090483, 2.44197697450093, 0.831510275829206, -0.235694520704707, 1.6370875838366, -0.235694520704707, 0.688022442899665, 0.56620571694393, 0.0865319014350673, 0.965336240640277, 2.4562951432938, 0.442174515567164, 2.16959511326347, 5.84967070625675, 0.0802256582898436, 0.807094572229046, 0.831510275829206, 3.06088249587567, 7.84947316519051, 0.939766456519272, 2.08002811722361, 0.169792654329705, 1.16011052636907, 2.74278094610367, 3.18752185714054, 1.03465140856114, 0.742978487169905, 1.38875329192844, 2.7907339351624, 0.649399307990452, 0.588658009946432, 1.62630213168625, 1.37885583765837, 3.4588052584027, 0.378607817368726, 1.64791350682152, 2.55856273925465, 1.11467486151704, 2.75867688212949, 1.44886182210277, 1.29127425323328, 0.872667965105639, 2.51428915807333, 0.603723867107512, 1.27216752717472, 1.33960210165592, 2.77466088473214, 2.68005879999676, 3.39848727561001, 1.61555684891069, 1.30087527736898, 1.45900279946893, 0.856134366332116, 1.58355905227488, 1.37885583765837, 1.00846268026794, 1.44886182210277, 1.72485420222661, 4.19550729872178, 1.43875636487019, 1.60485143740593, 5.07843950370286, 3.69143051554687, 2.13086828897653, 1.61555684891069, 2.13086828897653, 1.90882759744288, 1.51024935267055, 1.54143998175321, 3.6046538963397, 5.15057088795887, 5.99276309359934, 1.94466787312459, 2.44197697450093, 2.00540917116861, 4.32972243262905, 2.14371955784334, 1.9567142584347, 1.98095898169889, 2.88909931785647, 1.80390312212468, 2.18262044053522, 2.69561196483408, 4.71105188801319, 10.3567386812681, 2.16959511326347, 2.5884604688802, 2.72697211153424, 2.31621398549464, 2.85593682526588, 2.51428915807333, 2.42772951300254, 4.04227987136562, 2.64920176692422, 2.60352632604128, 4.32972243262905, 2.87247042403941, 2.82315118733936));atan(argv[[1]]);");
    }

    @Test
    public void testatan5() {
        assertEval("argv <- list(structure(numeric(0), .Dim = c(0L, 0L)));atan(argv[[1]]);");
    }

    @Test
    public void testatan6() {
        assertEval(Ignored.Unknown, "argv <- list(-1.46941282670977e-16);atan(argv[[1]]);");
    }
}
