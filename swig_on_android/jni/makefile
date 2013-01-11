#
#
#

SWIG_JAVA_DIR=$(CURDIR)/../src/com/eric/swig
SWIG_CPP_DIR=$(CURDIR)/output_swig

all : dll_gen

swig_gen : harry.i
	-rm -r $(SWIG_CPP_DIR)
	-rm -r $(SWIG_JAVA_DIR)
	mkdir -p $(SWIG_CPP_DIR)
	mkdir -p $(SWIG_JAVA_DIR)
	swig -o $(SWIG_CPP_DIR)/harry_wrap.cpp  -outdir $(SWIG_JAVA_DIR) -java -package com.eric.swig -c++ harry.i


dll_gen : swig_gen
	cd ..; ndk-build

clean:
	-rm -r ../obj
	-rm -r libs\armeabi
	-rm -r $(SWIG_CPP_DIR)
	-rm -r $(SWIG_JAVA_DIR)
	