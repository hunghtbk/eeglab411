/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class lab411_eeg_p300processing_MainProcess */

#define SAMPLECOUNTPERERP 19
#define CHANNEL 3
#define FEATURECOUNT 144
#define SIZE 57

char* grid[] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L",
		"M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z",
		"1", "2", "3", "4", "5", "6", "7", "8", "9", "0" };
#ifndef _Included_lab411_eeg_p300processing_MainProcess
#define _Included_lab411_eeg_p300processing_MainProcess
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     lab411_eeg_p300processing_MainProcess
 * Method:    CalculateTraining
 * Signature: (II[D[I[DILjava/lang/String;)Z
 */JNIEXPORT jboolean JNICALL Java_lab411_eeg_p300processing_MainProcess_CalculateTraining(
		JNIEnv *, jclass, jint, jint, jdoubleArray, jintArray, jdoubleArray,
		jint, jstring);
/*
 * Class:     lab411_eeg_p300processing_MainProcess
 * Method:    TestTrain
 * Signature: ([D[I[DZZILjava/lang/String;)D
 */JNIEXPORT jdouble JNICALL Java_lab411_eeg_p300processing_MainProcess_TestTrain(
		JNIEnv *, jclass, jdoubleArray, jintArray, jdoubleArray, jboolean,
		jboolean, jint, jstring);
/*
 * Class:     lab411_eeg_p300processing_MainProcess
 * Method:    FeatureAggregator
 * Signature: (Ljava/util/List;Ljava/util/List;)[Llab411/eeg/p300processing/FeatureVector;
 */JNIEXPORT jobjectArray JNICALL Java_lab411_eeg_p300processing_MainProcess_FeatureAggregator(
		JNIEnv *, jclass, jobject, jobject);
/*
 * Class:     lab411_eeg_p300processing_MainProcess
 * Method:    VotingProcess
 * Signature: (Ljava/util/ArrayList;[D)Ljava/lang/String;
 */JNIEXPORT jstring JNICALL Java_lab411_eeg_p300processing_MainProcess_VotingProcess(
		JNIEnv *, jclass, jobject, jdoubleArray);
/*
 * Class:     lab411_eeg_p300processing_MainProcess
 * Method:    xDawnTrainer
 * Signature: ([[D[[D[IDILjava/lang/String;)I
 */JNIEXPORT jint JNICALL Java_lab411_eeg_p300processing_MainProcess_xDawnTrainer(
		JNIEnv *, jclass, jobjectArray, jobjectArray, jintArray, jdouble, jint,
		jstring);

int labelRow;
int labelCol;
#ifdef __cplusplus
}
#endif
#endif
