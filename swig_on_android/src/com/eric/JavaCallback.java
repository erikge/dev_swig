package com.eric;

import com.eric.swig.CallbackStub;

/**
 * DDMS中：tag:system.out 可以查看log
 * @author gexw1
 *
 */
public class JavaCallback extends CallbackStub {

	@Override
	public void on_void_method() {
		System.out.println("haha, java imple");
	}
	
	
	@Override
	public String on_string_method(String msg) {
		return "123" + " | " + super.on_string_method(msg);
	}
}
