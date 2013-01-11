/**
 * Copyright
 *
 * @author erikge
 */

#ifndef __HARRY__
#define __HARRY__

#include <cstdio>
#include <iostream>

/*****************************************************************
 * Callback API
 *
 * Demastrate call java function from native(c/cpp) code
 */

class CallbackStub {
public:
	virtual ~CallbackStub() { std::cout << "Callback::~Callback()" << std:: endl; }

	virtual void on_void_method() { std::cout << "Callback::on_void_method_void()" << std::endl; }
    virtual char* on_string_method(char *msg) { return msg; }
    virtual signed char* on_byte_array_method(signed char arr[]) { return arr; };
};

void init(CallbackStub* callback);

/******************************************************************
 * Call API
 * Native wrap api, called by java
 */
void void_method();
char* string_method(char *msg);
signed char* byte_array_method(signed char arr[]);
//void global_void_c_ref_method(int &value_i, char * value_str);
//void *test_void_ptr(void *ptr);

typedef enum NetType {
    NET_UDP = 0,
    NET_TCP = 1,
}NetType;

typedef struct DefStruct{
    int value_int;
    NetType net;

    DefStruct() {
        value_int = 0;
    }
}DefStruct;

class DefClass {
public:
    DefClass() {
        value_int = 0;
    }

    int value_int;
};



#endif /* __HARRY__ */
