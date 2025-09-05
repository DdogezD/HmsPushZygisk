#ifndef HMSPUSHZYGISK_HOOK_H
#define HMSPUSHZYGISK_HOOK_H


#include <jni.h>
#include <fcntl.h>
#include "zygisk.hpp"

using zygisk::Api;

class Hook {
public:
    Hook(Api *api, JNIEnv *env, bool skipBrand = false)
        : api(api), env(env), skipBrand(skipBrand) {}

    void hook();

private:
    Api *api;
    JNIEnv *env;
    bool skipBrand;
};

#endif //HMSPUSHZYGISK_HOOK_H