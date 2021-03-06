/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class JNI_REGISTER */

#ifndef _JNI_REGISTER
#define _JNI_REGISTER
#ifdef __cplusplus
extern "C" {
#endif
#define  JNIDEFINE(fname) Java_archermind_airplay_NativeAirplay_##fname
/*
 * Class:     JNI_REGISTER
 * Method:    doCallBackWork
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jint JNICALL JNIDEFINE(doCallBackWork)
  (JNIEnv * env, jclass obj, jobject notifier_obj);

/*
 * Class:     JNI_REGISTER
 * Method:    startService
 * Signature: ()V
 */
JNIEXPORT jboolean JNICALL JNIDEFINE(startService)
  (JNIEnv *, jclass);

/*
 * Class:     JNI_REGISTER
 * Method:    stopService
 * Signature: ()V
 */
JNIEXPORT void JNICALL JNIDEFINE(stopService)
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
