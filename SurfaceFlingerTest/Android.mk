LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES:=		\
	surfaceflinger.cpp	\
	demo.c

LOCAL_MODULE:= demo

LOCAL_SHARED_LIBRARIES := libui libutils

include $(BUILD_EXECUTABLE)
