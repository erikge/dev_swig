#include "harry.h"

#include <android/log.h>

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

void * void_ptr_method(void * object) {
    return NULL;
}
void byte_array_input_method(char *buf, int buf_len){
    __android_log_print( ANDROID_LOG_DEBUG, "erik", "~~~~~~~~ buf_len(%d)", buf_len);
    for(int i = 0; i < buf_len; ++i) {
        __android_log_print( ANDROID_LOG_DEBUG, "erik", "~~~~~~~~ buf[%d] = %d", i, buf[i]);
    }
}

void input_output_para(int *para_inout, int *para_out) {
    int temp = *para_inout;
    *para_inout = *para_out; // output para does not pass in value. Its initial value is always 0
    *para_out = temp;
}
