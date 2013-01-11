#########
# Harry #
#########

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE    := harry

LOCAL_SRC_FILES := harry.cpp \
	output_swig/harry_wrap.cpp

LOCAL_LDLIBS := -llog
include $(BUILD_SHARED_LIBRARY)


