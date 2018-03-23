/*
 * Copyright (c) 2018, 2018, Oracle and/or its affiliates. All rights reserved.
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

// Code generated by com.oracle.truffle.r.ffi.codegen.FFITestsCodeGen class
// All the generated files in testrffi can be regenerated by running 'mx testrfficodegen'
// The following code defines a 'SEXP' variant of every RFFI function implemented in FastR
// Run the same Java class with '-init' option to get sequence of CALLDEF statements that register those functions for use from R
// RFFI functions that take/return C pointers are ignored
#define NO_FASTR_REDEFINE
#include <R.h>
#include <Rdefines.h>
#include <Rinterface.h>
#include <Rinternals.h>
#include <Rinterface.h>
#include <R_ext/Parse.h>
#include <R_ext/Connections.h>
#include <Rmath.h>

#include "rffiwrappers.h"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wint-conversion"

#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"

SEXP api_OBJECT(SEXP x) {
    return ScalarInteger(OBJECT(x));
}

SEXP api_ATTRIB(SEXP obj) {
    return ATTRIB(obj);
}

SEXP api_Rf_cons(SEXP car, SEXP cdr) {
    return Rf_cons(car, cdr);
}

SEXP api_Rf_ScalarInteger(SEXP value) {
    return Rf_ScalarInteger(INTEGER_VALUE(value));
}

SEXP api_Rf_ScalarLogical(SEXP value) {
    return Rf_ScalarLogical(INTEGER_VALUE(value));
}

SEXP api_Rf_ScalarReal(SEXP value) {
    return Rf_ScalarReal(NUMERIC_VALUE(value));
}

SEXP api_Rf_ScalarString(SEXP value) {
    return Rf_ScalarString(value);
}

SEXP api_Rf_asInteger(SEXP x) {
    return ScalarInteger(Rf_asInteger(x));
}

SEXP api_Rf_asReal(SEXP x) {
    return ScalarReal(Rf_asReal(x));
}

SEXP api_Rf_asLogical(SEXP x) {
    return ScalarInteger(Rf_asLogical(x));
}

SEXP api_Rf_asChar(SEXP x) {
    return Rf_asChar(x);
}

SEXP api_Rf_coerceVector(SEXP x, SEXP mode) {
    return Rf_coerceVector(x, INTEGER_VALUE(mode));
}

SEXP api_Rf_mkCharLenCE(SEXP bytes, SEXP len, SEXP encoding) {
    return Rf_mkCharLenCE(R_CHAR(STRING_ELT(bytes, 0)), INTEGER_VALUE(len), INTEGER_VALUE(encoding));
}

SEXP api_Rf_defineVar(SEXP symbolArg, SEXP value, SEXP envArg) {
    Rf_defineVar(symbolArg, value, envArg);
    return R_NilValue;
}

SEXP api_R_getClassDef(SEXP clazz) {
    return R_getClassDef(R_CHAR(STRING_ELT(clazz, 0)));
}

SEXP api_R_do_MAKE_CLASS(SEXP clazz) {
    return R_do_MAKE_CLASS(R_CHAR(STRING_ELT(clazz, 0)));
}

SEXP api_R_do_new_object(SEXP classDef) {
    return R_do_new_object(classDef);
}

SEXP api_Rf_findVar(SEXP symbolArg, SEXP envArg) {
    return Rf_findVar(symbolArg, envArg);
}

SEXP api_Rf_findVarInFrame(SEXP envArg, SEXP symbolArg) {
    return Rf_findVarInFrame(envArg, symbolArg);
}

SEXP api_Rf_findVarInFrame3(SEXP envArg, SEXP symbolArg, SEXP doGet) {
    return Rf_findVarInFrame3(envArg, symbolArg, INTEGER_VALUE(doGet));
}

SEXP api_Rf_getAttrib(SEXP obj, SEXP name) {
    return Rf_getAttrib(obj, name);
}

SEXP api_Rf_setAttrib(SEXP obj, SEXP name, SEXP val) {
    Rf_setAttrib(obj, name, val);
    return R_NilValue;
}

SEXP api_Rf_inherits(SEXP x, SEXP clazz) {
    return ScalarInteger(Rf_inherits(x, R_CHAR(STRING_ELT(clazz, 0))));
}

SEXP api_Rf_install(SEXP name) {
    return Rf_install(R_CHAR(STRING_ELT(name, 0)));
}

SEXP api_Rf_installChar(SEXP name) {
    return Rf_installChar(name);
}

SEXP api_Rf_lengthgets(SEXP x, SEXP newSize) {
    return Rf_lengthgets(x, INTEGER_VALUE(newSize));
}

SEXP api_Rf_isString(SEXP x) {
    return ScalarInteger(Rf_isString(x));
}

SEXP api_Rf_isNull(SEXP x) {
    return ScalarInteger(Rf_isNull(x));
}

SEXP api_Rf_PairToVectorList(SEXP x) {
    return Rf_PairToVectorList(x);
}

SEXP api_Rf_error(SEXP msg) {
    Rf_error(R_CHAR(STRING_ELT(msg, 0)));
    return R_NilValue;
}

SEXP api_Rf_warning(SEXP msg) {
    Rf_warning(R_CHAR(STRING_ELT(msg, 0)));
    return R_NilValue;
}

SEXP api_Rf_warningcall(SEXP call, SEXP msg) {
    Rf_warningcall(call, R_CHAR(STRING_ELT(msg, 0)));
    return R_NilValue;
}

SEXP api_Rf_errorcall(SEXP call, SEXP msg) {
    Rf_errorcall(call, R_CHAR(STRING_ELT(msg, 0)));
    return R_NilValue;
}

SEXP api_Rf_allocVector(SEXP mode, SEXP n) {
    return Rf_allocVector(INTEGER_VALUE(mode), INTEGER_VALUE(n));
}

SEXP api_Rf_allocArray(SEXP mode, SEXP dimsObj) {
    return Rf_allocArray(INTEGER_VALUE(mode), dimsObj);
}

SEXP api_Rf_allocMatrix(SEXP mode, SEXP nrow, SEXP ncol) {
    return Rf_allocMatrix(INTEGER_VALUE(mode), INTEGER_VALUE(nrow), INTEGER_VALUE(ncol));
}

SEXP api_Rf_nrows(SEXP x) {
    return ScalarInteger(Rf_nrows(x));
}

SEXP api_Rf_ncols(SEXP x) {
    return ScalarInteger(Rf_ncols(x));
}

SEXP api_LENGTH(SEXP x) {
    return ScalarInteger(LENGTH(x));
}

SEXP api_SET_STRING_ELT(SEXP x, SEXP i, SEXP v) {
    SET_STRING_ELT(x, INTEGER_VALUE(i), v);
    return R_NilValue;
}

SEXP api_SET_VECTOR_ELT(SEXP x, SEXP i, SEXP v) {
    SET_VECTOR_ELT(x, INTEGER_VALUE(i), v);
    return R_NilValue;
}

SEXP api_SET_ATTRIB(SEXP target, SEXP attributes) {
    SET_ATTRIB(target, attributes);
    return R_NilValue;
}

SEXP api_STRING_ELT(SEXP x, SEXP i) {
    return STRING_ELT(x, INTEGER_VALUE(i));
}

SEXP api_VECTOR_ELT(SEXP x, SEXP i) {
    return VECTOR_ELT(x, INTEGER_VALUE(i));
}

SEXP api_NAMED(SEXP x) {
    return ScalarInteger(NAMED(x));
}

SEXP api_SET_OBJECT(SEXP x, SEXP flag) {
    SET_OBJECT(x, INTEGER_VALUE(flag));
    return R_NilValue;
}

SEXP api_SET_NAMED(SEXP x, SEXP v) {
    SET_NAMED(x, INTEGER_VALUE(v));
    return R_NilValue;
}

SEXP api_SET_TYPEOF(SEXP x, SEXP v) {
    SET_TYPEOF(x, INTEGER_VALUE(v));
    return R_NilValue;
}

SEXP api_TYPEOF(SEXP x) {
    return ScalarInteger(TYPEOF(x));
}

SEXP api_Rf_any_duplicated(SEXP x, SEXP fromLast) {
    return ScalarInteger(Rf_any_duplicated(x, INTEGER_VALUE(fromLast)));
}

SEXP api_Rf_any_duplicated3(SEXP x, SEXP incomparables, SEXP fromLast) {
    return ScalarInteger(Rf_any_duplicated3(x, incomparables, INTEGER_VALUE(fromLast)));
}

SEXP api_PRINTNAME(SEXP x) {
    return PRINTNAME(x);
}

SEXP api_TAG(SEXP e) {
    return TAG(e);
}

SEXP api_CAR(SEXP e) {
    return CAR(e);
}

SEXP api_CAAR(SEXP e) {
    return CAAR(e);
}

SEXP api_CDR(SEXP e) {
    return CDR(e);
}

SEXP api_CDAR(SEXP e) {
    return CDAR(e);
}

SEXP api_CADR(SEXP e) {
    return CADR(e);
}

SEXP api_CADDR(SEXP e) {
    return CADDR(e);
}

SEXP api_CADDDR(SEXP e) {
    return CADDDR(e);
}

SEXP api_CAD4R(SEXP e) {
    return CAD4R(e);
}

SEXP api_CDDR(SEXP e) {
    return CDDR(e);
}

SEXP api_CDDDR(SEXP e) {
    return CDDDR(e);
}

SEXP api_SET_TAG(SEXP x, SEXP y) {
    SET_TAG(x, y);
    return R_NilValue;
}

SEXP api_SETCAR(SEXP x, SEXP y) {
    return SETCAR(x, y);
}

SEXP api_SETCDR(SEXP x, SEXP y) {
    return SETCDR(x, y);
}

SEXP api_FORMALS(SEXP x) {
    return FORMALS(x);
}

SEXP api_BODY(SEXP x) {
    return BODY(x);
}

SEXP api_CLOENV(SEXP x) {
    return CLOENV(x);
}

SEXP api_SET_FORMALS(SEXP x, SEXP y) {
    SET_FORMALS(x, y);
    return R_NilValue;
}

SEXP api_SET_BODY(SEXP x, SEXP y) {
    SET_BODY(x, y);
    return R_NilValue;
}

SEXP api_SET_CLOENV(SEXP x, SEXP y) {
    SET_CLOENV(x, y);
    return R_NilValue;
}

SEXP api_SETCADR(SEXP x, SEXP y) {
    return SETCADR(x, y);
}

SEXP api_SETCADDR(SEXP x, SEXP y) {
    return SETCADDR(x, y);
}

SEXP api_SETCADDDR(SEXP x, SEXP y) {
    return SETCADDDR(x, y);
}

SEXP api_SETCAD4R(SEXP x, SEXP y) {
    return SETCAD4R(x, y);
}

SEXP api_SYMVALUE(SEXP x) {
    return SYMVALUE(x);
}

SEXP api_SET_SYMVALUE(SEXP x, SEXP v) {
    SET_SYMVALUE(x, v);
    return R_NilValue;
}

SEXP api_R_BindingIsLocked(SEXP sym, SEXP env) {
    return ScalarInteger(R_BindingIsLocked(sym, env));
}

SEXP api_R_LockBinding(SEXP sym, SEXP env) {
    R_LockBinding(sym, env);
    return R_NilValue;
}

SEXP api_R_unLockBinding(SEXP sym, SEXP env) {
    R_unLockBinding(sym, env);
    return R_NilValue;
}

SEXP api_R_FindNamespace(SEXP name) {
    return R_FindNamespace(name);
}

SEXP api_Rf_eval(SEXP expr, SEXP env) {
    return Rf_eval(expr, env);
}

SEXP api_Rf_findFun(SEXP symbolObj, SEXP envObj) {
    return Rf_findFun(symbolObj, envObj);
}

SEXP api_Rf_GetOption1(SEXP tag) {
    return Rf_GetOption1(tag);
}

SEXP api_Rf_gsetVar(SEXP symbol, SEXP value, SEXP rho) {
    Rf_gsetVar(symbol, value, rho);
    return R_NilValue;
}

SEXP api_DUPLICATE_ATTRIB(SEXP to, SEXP from) {
    DUPLICATE_ATTRIB(to, from);
    return R_NilValue;
}

SEXP api_R_compute_identical(SEXP x, SEXP y, SEXP flags) {
    return ScalarInteger(R_compute_identical(x, y, INTEGER_VALUE(flags)));
}

SEXP api_Rf_copyListMatrix(SEXP s, SEXP t, SEXP byrow) {
    Rf_copyListMatrix(s, t, INTEGER_VALUE(byrow));
    return R_NilValue;
}

SEXP api_Rf_copyMatrix(SEXP s, SEXP t, SEXP byrow) {
    Rf_copyMatrix(s, t, INTEGER_VALUE(byrow));
    return R_NilValue;
}

SEXP api_RDEBUG(SEXP x) {
    return ScalarInteger(RDEBUG(x));
}

SEXP api_SET_RDEBUG(SEXP x, SEXP v) {
    SET_RDEBUG(x, INTEGER_VALUE(v));
    return R_NilValue;
}

SEXP api_RSTEP(SEXP x) {
    return ScalarInteger(RSTEP(x));
}

SEXP api_SET_RSTEP(SEXP x, SEXP v) {
    SET_RSTEP(x, INTEGER_VALUE(v));
    return R_NilValue;
}

SEXP api_ENCLOS(SEXP x) {
    return ENCLOS(x);
}

SEXP api_PRVALUE(SEXP x) {
    return PRVALUE(x);
}

SEXP api_R_lsInternal3(SEXP envArg, SEXP allArg, SEXP sortedArg) {
    return R_lsInternal3(envArg, INTEGER_VALUE(allArg), INTEGER_VALUE(sortedArg));
}

SEXP api_R_HomeDir() {
    return ScalarString(Rf_mkString(R_HomeDir()));
}

SEXP api_IS_S4_OBJECT(SEXP x) {
    return ScalarInteger(IS_S4_OBJECT(x));
}

SEXP api_SET_S4_OBJECT(SEXP x) {
    SET_S4_OBJECT(x);
    return R_NilValue;
}

SEXP api_UNSET_S4_OBJECT(SEXP x) {
    UNSET_S4_OBJECT(x);
    return R_NilValue;
}

SEXP api_Rprintf(SEXP message) {
    Rprintf(R_CHAR(STRING_ELT(message, 0)));
    return R_NilValue;
}

SEXP api_GetRNGstate() {
    GetRNGstate();
    return R_NilValue;
}

SEXP api_PutRNGstate() {
    PutRNGstate();
    return R_NilValue;
}

SEXP api_unif_rand() {
    return ScalarReal(unif_rand());
}

SEXP api_Rf_classgets(SEXP x, SEXP y) {
    return Rf_classgets(x, y);
}

SEXP api_R_ExternalPtrAddr(SEXP x) {
    return ScalarInteger(R_ExternalPtrAddr(x));
}

SEXP api_R_ExternalPtrTag(SEXP x) {
    return R_ExternalPtrTag(x);
}

SEXP api_R_ExternalPtrProtected(SEXP x) {
    return R_ExternalPtrProtected(x);
}

SEXP api_R_SetExternalPtrAddr(SEXP x, SEXP addr) {
    R_SetExternalPtrAddr(x, INTEGER_VALUE(addr));
    return R_NilValue;
}

SEXP api_R_SetExternalPtrTag(SEXP x, SEXP tag) {
    R_SetExternalPtrTag(x, tag);
    return R_NilValue;
}

SEXP api_R_SetExternalPtrProtected(SEXP x, SEXP prot) {
    R_SetExternalPtrProtected(x, prot);
    return R_NilValue;
}

SEXP api_PRSEEN(SEXP x) {
    return ScalarInteger(PRSEEN(x));
}

SEXP api_PRENV(SEXP x) {
    return PRENV(x);
}

SEXP api_R_PromiseExpr(SEXP x) {
    return R_PromiseExpr(x);
}

SEXP api_PRCODE(SEXP x) {
    return PRCODE(x);
}

SEXP api_R_new_custom_connection(SEXP description, SEXP mode, SEXP className, SEXP readAddr) {
    return R_new_custom_connection(R_CHAR(STRING_ELT(description, 0)), R_CHAR(STRING_ELT(mode, 0)), R_CHAR(STRING_ELT(className, 0)), readAddr);
}

SEXP api_R_ReadConnection(SEXP fd, SEXP bufAddress, SEXP size) {
    return ScalarInteger(R_ReadConnection(INTEGER_VALUE(fd), INTEGER_VALUE(bufAddress), INTEGER_VALUE(size)));
}

SEXP api_R_WriteConnection(SEXP fd, SEXP bufAddress, SEXP size) {
    return ScalarInteger(R_WriteConnection(INTEGER_VALUE(fd), INTEGER_VALUE(bufAddress), INTEGER_VALUE(size)));
}

SEXP api_R_GetConnection(SEXP fd) {
    return R_GetConnection(INTEGER_VALUE(fd));
}

SEXP api_R_do_slot(SEXP o, SEXP name) {
    return R_do_slot(o, name);
}

SEXP api_R_do_slot_assign(SEXP o, SEXP name, SEXP value) {
    return R_do_slot_assign(o, name, value);
}

SEXP api_Rf_str2type(SEXP name) {
    return ScalarInteger(Rf_str2type(R_CHAR(STRING_ELT(name, 0))));
}

SEXP api_Rf_dunif(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_dunif(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_qunif(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_qunif(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_punif(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_punif(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_runif(SEXP a, SEXP b) {
    return ScalarReal(Rf_runif(NUMERIC_VALUE(a), NUMERIC_VALUE(b)));
}

SEXP api_Rf_dchisq(SEXP a, SEXP b, SEXP c) {
    return ScalarReal(Rf_dchisq(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c)));
}

SEXP api_Rf_pchisq(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_pchisq(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_qchisq(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_qchisq(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_rchisq(SEXP a) {
    return ScalarReal(Rf_rchisq(NUMERIC_VALUE(a)));
}

SEXP api_Rf_dnchisq(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_dnchisq(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_pnchisq(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_pnchisq(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_qnchisq(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_qnchisq(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_rnchisq(SEXP a, SEXP b) {
    return ScalarReal(Rf_rnchisq(NUMERIC_VALUE(a), NUMERIC_VALUE(b)));
}

SEXP api_Rf_dnorm4(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_dnorm4(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_pnorm5(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_pnorm5(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_qnorm5(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_qnorm5(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_rnorm(SEXP a, SEXP b) {
    return ScalarReal(Rf_rnorm(NUMERIC_VALUE(a), NUMERIC_VALUE(b)));
}

SEXP api_Rf_dlnorm(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_dlnorm(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_plnorm(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_plnorm(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_qlnorm(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_qlnorm(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_rlnorm(SEXP a, SEXP b) {
    return ScalarReal(Rf_rlnorm(NUMERIC_VALUE(a), NUMERIC_VALUE(b)));
}

SEXP api_Rf_dgamma(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_dgamma(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_pgamma(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_pgamma(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_qgamma(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_qgamma(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_rgamma(SEXP a, SEXP b) {
    return ScalarReal(Rf_rgamma(NUMERIC_VALUE(a), NUMERIC_VALUE(b)));
}

SEXP api_Rf_dbeta(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_dbeta(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_pbeta(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_pbeta(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_qbeta(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_qbeta(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_rbeta(SEXP a, SEXP b) {
    return ScalarReal(Rf_rbeta(NUMERIC_VALUE(a), NUMERIC_VALUE(b)));
}

SEXP api_Rf_df(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_df(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_pf(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_pf(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_qf(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_qf(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_rf(SEXP a, SEXP b) {
    return ScalarReal(Rf_rf(NUMERIC_VALUE(a), NUMERIC_VALUE(b)));
}

SEXP api_Rf_dt(SEXP a, SEXP b, SEXP c) {
    return ScalarReal(Rf_dt(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c)));
}

SEXP api_Rf_pt(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_pt(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_qt(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_qt(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_rt(SEXP a) {
    return ScalarReal(Rf_rt(NUMERIC_VALUE(a)));
}

SEXP api_Rf_dbinom(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_dbinom(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_pbinom(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_pbinom(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_qbinom(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_qbinom(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_rbinom(SEXP a, SEXP b) {
    return ScalarReal(Rf_rbinom(NUMERIC_VALUE(a), NUMERIC_VALUE(b)));
}

SEXP api_Rf_dcauchy(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_dcauchy(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_pcauchy(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_pcauchy(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_qcauchy(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_qcauchy(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_rcauchy(SEXP a, SEXP b) {
    return ScalarReal(Rf_rcauchy(NUMERIC_VALUE(a), NUMERIC_VALUE(b)));
}

SEXP api_Rf_dexp(SEXP a, SEXP b, SEXP c) {
    return ScalarReal(Rf_dexp(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c)));
}

SEXP api_Rf_pexp(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_pexp(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_qexp(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_qexp(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_rexp(SEXP a) {
    return ScalarReal(Rf_rexp(NUMERIC_VALUE(a)));
}

SEXP api_Rf_dgeom(SEXP a, SEXP b, SEXP c) {
    return ScalarReal(Rf_dgeom(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c)));
}

SEXP api_Rf_pgeom(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_pgeom(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_qgeom(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_qgeom(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_rgeom(SEXP a) {
    return ScalarReal(Rf_rgeom(NUMERIC_VALUE(a)));
}

SEXP api_Rf_dhyper(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_dhyper(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), NUMERIC_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_phyper(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e, SEXP f) {
    return ScalarReal(Rf_phyper(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), NUMERIC_VALUE(d), INTEGER_VALUE(e), INTEGER_VALUE(f)));
}

SEXP api_Rf_qhyper(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e, SEXP f) {
    return ScalarReal(Rf_qhyper(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), NUMERIC_VALUE(d), INTEGER_VALUE(e), INTEGER_VALUE(f)));
}

SEXP api_Rf_rhyper(SEXP a, SEXP b, SEXP c) {
    return ScalarReal(Rf_rhyper(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c)));
}

SEXP api_Rf_dnbinom(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_dnbinom(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_pnbinom(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_pnbinom(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_qnbinom(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_qnbinom(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_rnbinom(SEXP a, SEXP b) {
    return ScalarReal(Rf_rnbinom(NUMERIC_VALUE(a), NUMERIC_VALUE(b)));
}

SEXP api_Rf_dnbinom_mu(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_dnbinom_mu(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_pnbinom_mu(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_pnbinom_mu(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_qnbinom_mu(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_qnbinom_mu(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_rnbinom_mu(SEXP a, SEXP b) {
    return ScalarReal(Rf_rnbinom_mu(NUMERIC_VALUE(a), NUMERIC_VALUE(b)));
}

SEXP api_Rf_dpois(SEXP a, SEXP b, SEXP c) {
    return ScalarReal(Rf_dpois(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c)));
}

SEXP api_Rf_ppois(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_ppois(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_qpois(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_qpois(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_rpois(SEXP a) {
    return ScalarReal(Rf_rpois(NUMERIC_VALUE(a)));
}

SEXP api_Rf_dweibull(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_dweibull(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_pweibull(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_pweibull(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_qweibull(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_qweibull(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_rweibull(SEXP a, SEXP b) {
    return ScalarReal(Rf_rweibull(NUMERIC_VALUE(a), NUMERIC_VALUE(b)));
}

SEXP api_Rf_dlogis(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_dlogis(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_plogis(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_plogis(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_qlogis(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_qlogis(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_rlogis(SEXP a, SEXP b) {
    return ScalarReal(Rf_rlogis(NUMERIC_VALUE(a), NUMERIC_VALUE(b)));
}

SEXP api_Rf_dnbeta(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_dnbeta(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), NUMERIC_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_pnbeta(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e, SEXP f) {
    return ScalarReal(Rf_pnbeta(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), NUMERIC_VALUE(d), INTEGER_VALUE(e), INTEGER_VALUE(f)));
}

SEXP api_Rf_qnbeta(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e, SEXP f) {
    return ScalarReal(Rf_qnbeta(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), NUMERIC_VALUE(d), INTEGER_VALUE(e), INTEGER_VALUE(f)));
}

SEXP api_Rf_dnf(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_dnf(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), NUMERIC_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_pnf(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e, SEXP f) {
    return ScalarReal(Rf_pnf(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), NUMERIC_VALUE(d), INTEGER_VALUE(e), INTEGER_VALUE(f)));
}

SEXP api_Rf_qnf(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e, SEXP f) {
    return ScalarReal(Rf_qnf(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), NUMERIC_VALUE(d), INTEGER_VALUE(e), INTEGER_VALUE(f)));
}

SEXP api_Rf_dnt(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_dnt(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_pnt(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_pnt(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_qnt(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_qnt(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_ptukey(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e, SEXP f) {
    return ScalarReal(Rf_ptukey(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), NUMERIC_VALUE(d), INTEGER_VALUE(e), INTEGER_VALUE(f)));
}

SEXP api_Rf_qtukey(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e, SEXP f) {
    return ScalarReal(Rf_qtukey(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), NUMERIC_VALUE(d), INTEGER_VALUE(e), INTEGER_VALUE(f)));
}

SEXP api_Rf_dwilcox(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_dwilcox(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_pwilcox(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_pwilcox(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_qwilcox(SEXP a, SEXP b, SEXP c, SEXP d, SEXP e) {
    return ScalarReal(Rf_qwilcox(NUMERIC_VALUE(a), NUMERIC_VALUE(b), NUMERIC_VALUE(c), INTEGER_VALUE(d), INTEGER_VALUE(e)));
}

SEXP api_Rf_rwilcox(SEXP a, SEXP b) {
    return ScalarReal(Rf_rwilcox(NUMERIC_VALUE(a), NUMERIC_VALUE(b)));
}

SEXP api_Rf_dsignrank(SEXP a, SEXP b, SEXP c) {
    return ScalarReal(Rf_dsignrank(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c)));
}

SEXP api_Rf_psignrank(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_psignrank(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_qsignrank(SEXP a, SEXP b, SEXP c, SEXP d) {
    return ScalarReal(Rf_qsignrank(NUMERIC_VALUE(a), NUMERIC_VALUE(b), INTEGER_VALUE(c), INTEGER_VALUE(d)));
}

SEXP api_Rf_rsignrank(SEXP a) {
    return ScalarReal(Rf_rsignrank(NUMERIC_VALUE(a)));
}

SEXP api_Rf_ftrunc(SEXP a) {
    return ScalarReal(Rf_ftrunc(NUMERIC_VALUE(a)));
}

SEXP api_Rf_namesgets(SEXP vec, SEXP val) {
    return Rf_namesgets(vec, val);
}

SEXP api_Rf_copyMostAttrib(SEXP x, SEXP y) {
    Rf_copyMostAttrib(x, y);
    return R_NilValue;
}

SEXP api_Rf_VectorToPairList(SEXP x) {
    return Rf_VectorToPairList(x);
}

SEXP api_Rf_asCharacterFactor(SEXP x) {
    return Rf_asCharacterFactor(x);
}

SEXP api_Rf_match(SEXP itables, SEXP ix, SEXP nmatch) {
    return Rf_match(itables, ix, INTEGER_VALUE(nmatch));
}

SEXP api_Rf_NonNullStringMatch(SEXP s, SEXP t) {
    return ScalarLogical(Rf_NonNullStringMatch(s, t));
}

SEXP api_R_has_slot(SEXP container, SEXP name) {
    return ScalarInteger(R_has_slot(container, name));
}

SEXP api_Rf_PrintValue(SEXP value) {
    Rf_PrintValue(value);
    return R_NilValue;
}

#pragma GCC diagnostic pop
#pragma GCC diagnostic pop
