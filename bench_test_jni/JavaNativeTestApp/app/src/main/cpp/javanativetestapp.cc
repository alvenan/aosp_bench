#include <jni.h>
#include <algorithms.h>
#include <log/log.h>

char* jstr_to_char(JNIEnv* env, jstring jstr){
        const char* ch = env->GetStringUTFChars(jstr, 0);
        env->ReleaseStringUTFChars(jstr, ch);
        return (char *)ch;
}

extern "C" JNIEXPORT void JNICALL
Java_vendor_alvenan_javanativetestapp_JavaNativeTestAppImpl_qsortExec 
(JNIEnv* env, jobject, 
jstring input_path, jint arr_size) {
        qsortExec(jstr_to_char(env, input_path), arr_size);
}

extern "C" JNIEXPORT void JNICALL
Java_vendor_alvenan_javanativetestapp_JavaNativeTestAppImpl_dijkstraExec
(JNIEnv* env, jobject, 
jstring input_path, jint graph_size) {
        dijkstraExec(jstr_to_char(env, input_path), graph_size);
}

extern "C" JNIEXPORT void JNICALL
Java_vendor_alvenan_javanativetestapp_JavaNativeTestAppImpl_fftExec
(JNIEnv*, jobject, 
jint N) {

        fftExec((int)N);
}

extern "C" JNIEXPORT void JNICALL
Java_vendor_alvenan_javanativetestapp_JavaNativeTestAppImpl_rsaExec
(JNIEnv* env, jobject, 
jstring input_path) {
        rsaExec(jstr_to_char(env, input_path));
}