/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_dgis_input_evdev_EventDevice */

#ifndef _Included_com_dgis_input_evdev_EventDevice
#define _Included_com_dgis_input_evdev_EventDevice
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_dgis_input_evdev_EventDevice
 * Method:    ioctlGetID
 * Signature: (Ljava/lang/String;[S)Z
 */
JNIEXPORT jboolean JNICALL Java_com_dgis_input_evdev_EventDevice_ioctlGetID
  (JNIEnv *, jobject, jstring, jshortArray);

/*
 * Class:     com_dgis_input_evdev_EventDevice
 * Method:    ioctlGetEvdevVersion
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_dgis_input_evdev_EventDevice_ioctlGetEvdevVersion
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_dgis_input_evdev_EventDevice
 * Method:    ioctlGetDeviceName
 * Signature: (Ljava/lang/String;[B)Z
 */
JNIEXPORT jboolean JNICALL Java_com_dgis_input_evdev_EventDevice_ioctlGetDeviceName
  (JNIEnv *, jobject, jstring, jbyteArray);

/*
 * Class:     com_dgis_input_evdev_EventDevice
 * Method:    ioctlEVIOCGBIT
 * Signature: (Ljava/lang/String;[JII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_dgis_input_evdev_EventDevice_ioctlEVIOCGBIT
  (JNIEnv *, jobject, jstring, jlongArray, jint, jint);

/*
 * Class:     com_dgis_input_evdev_EventDevice
 * Method:    ioctlEVIOCGABS
 * Signature: (Ljava/lang/String;[II)Z
 */
JNIEXPORT jboolean JNICALL Java_com_dgis_input_evdev_EventDevice_ioctlEVIOCGABS
  (JNIEnv *, jobject, jstring, jintArray, jint);

#ifdef __cplusplus
}
#endif
#endif