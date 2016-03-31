/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_spark_sql_SGXEnclave */

#ifndef _Included_org_apache_spark_sql_SGXEnclave
#define _Included_org_apache_spark_sql_SGXEnclave
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_apache_spark_sql_SGXEnclave
 * Method:    StartEnclave
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_apache_spark_sql_SGXEnclave_StartEnclave
  (JNIEnv *, jobject);

/*
 * Class:     org_apache_spark_sql_SGXEnclave
 * Method:    StopEnclave
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_apache_spark_sql_SGXEnclave_StopEnclave
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_apache_spark_sql_SGXEnclave
 * Method:    Filter
 * Signature: (JI[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_apache_spark_sql_SGXEnclave_Filter
  (JNIEnv *, jobject, jlong, jint, jbyteArray);

/*
 * Class:     org_apache_spark_sql_SGXEnclave
 * Method:    Encrypt
 * Signature: (J[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_apache_spark_sql_SGXEnclave_Encrypt
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     org_apache_spark_sql_SGXEnclave
 * Method:    Decrypt
 * Signature: (J[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_apache_spark_sql_SGXEnclave_Decrypt
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     org_apache_spark_sql_SGXEnclave
 * Method:    Test
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_apache_spark_sql_SGXEnclave_Test
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_apache_spark_sql_SGXEnclave
 * Method:    ObliviousSort
 * Signature: (JI[BII)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_apache_spark_sql_SGXEnclave_ObliviousSort
  (JNIEnv *, jobject, jlong, jint, jbyteArray, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
