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

/* turn on director wrapping Callback */
%feature("director") CallbackStub;

%include "harry.h"

