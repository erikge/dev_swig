package com.eric.android;

import android.app.Activity;
import android.os.Bundle;
import android.view.Menu;

import com.eric.JavaCallback;
import com.eric.swig.CallbackStub;
import com.eric.swig.Harry;

public class MainActivity extends Activity {
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		
		initHarry();
		howToUseHarry();
	}

	@Override
	public boolean onCreateOptionsMenu(Menu menu) {
		// Inflate the menu; this adds items to the action bar if it is present.
		getMenuInflater().inflate(R.menu.activity_main, menu);
		return true;
	}
	
	private void initHarry() {
		System.loadLibrary("harry");
		Harry.init(new JavaCallback());
	}
	
	private void howToUseHarry() {
		Harry.init(new CallbackStub());
		System.out.println(Harry.string_method("abc"));
		
		Harry.init(new JavaCallback());
		System.out.println(Harry.string_method("abc"));
		Harry.void_method();
		
		byte[] array = new byte[] {1, 2, 3, 4};
		Harry.byte_array_input_method(array);
	}

}
