/*
 * Copyright
 *
 * @author erikge
 */

%module(directors="1") Harry
%{
#include "../harry.h"
%}

%include "std_string.i"
%include "typemaps.i"

/* turn on director wrapping Callback */
%feature("director") CallbackStub;


// pass Object from Java to Cpp
%typemap(jni) void * object "void *"
%typemap(jtype) void * object "Object"
%typemap(jstype) void * object "Object"
%typemap(javain) void * object "$javainput"
%typemap(in) void * %{
	$1 = $input;
%}


// pass byte[] from Java to Cpp
%apply (char *STRING, int LENGTH) { (char *buf, int buf_len) };
// return byte[] from Cpp to Java

%include "harry.h"

