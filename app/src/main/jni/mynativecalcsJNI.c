#include <jni.h>
#include "../include/calcs.h"

JNIEXPORT jdouble JNICALL
Java_com_example_emersonparizoto_consumerlibs_MainActivity_quadrado(JNIEnv *env, jobject instance,
                                                                    jint number) {

    return quadrado(number);

}

JNIEXPORT jdouble JNICALL
Java_com_example_emersonparizoto_consumerlibs_MainActivity_raiz(JNIEnv *env, jobject instance,
                                                                jint number) {

    return raizQuadrada(number);

}