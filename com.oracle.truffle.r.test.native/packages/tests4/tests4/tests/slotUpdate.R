#
# Copyright (c) 2017, 2018, Oracle and/or its affiliates. All rights reserved.
# DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
#
# This code is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License version 3 only, as
# published by the Free Software Foundation.
#
# This code is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
# version 3 for more details (a copy is included in the LICENSE file that
# accompanied this code).
#
# You should have received a copy of the GNU General Public License version
# 3 along with this work; if not, write to the Free Software Foundation,
# Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
#
# Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
# or visit www.oracle.com if you need additional information or have any
# questions.
#
stopifnot(require(methods))
stopifnot(require(tests4))

x<-getClass("ClassUnionRepresentation"); x@virtual<-TRUE; x@virtual
x<-getClass("ClassUnionRepresentation"); slot(x, "virtual", check=TRUE)<-TRUE; x@virtual
x<-initialize@valueClass; initialize@valueClass<-"foo"; initialize@valueClass<-x

x<-function() 42; attr(x, "foo")<-7; try(y@foo<-42)
x<-function() 42; attr(x, "foo")<-7; try(slot(y, "foo")<-42)
x<-function() 42; attr(x, "foo")<-7; y<-asS4(x); try(y@foo<-42)
x<-NULL; try(`@<-`(x, foo, "bar"))
x<-NULL; try(x@foo<-"bar")
