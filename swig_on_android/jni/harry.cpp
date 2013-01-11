#include "harry.h"


static CallbackStub *s_callback = NULL;

void init(CallbackStub* callback) {
//  if(s_callback) {
//      delete s_callback;
//      s_callback = NULL;
//  }
    s_callback = callback;
}

void void_method() {
    if(s_callback) {
        s_callback->on_void_method();
    }
}
char* string_method(char *msg) {
    if(s_callback) {
        return s_callback->on_string_method(msg);
    }
    return NULL;
}
signed char* byte_array_method(signed char arr[]) {
    if(s_callback) {
        return s_callback->on_byte_array_method(arr);
    }
    return NULL;
}


