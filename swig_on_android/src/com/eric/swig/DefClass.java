/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.8
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.eric.swig;

public class DefClass {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected DefClass(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(DefClass obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        HarryJNI.delete_DefClass(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public DefClass() {
    this(HarryJNI.new_DefClass(), true);
  }

  public void setValue_int(int value) {
    HarryJNI.DefClass_value_int_set(swigCPtr, this, value);
  }

  public int getValue_int() {
    return HarryJNI.DefClass_value_int_get(swigCPtr, this);
  }

}
