//
// Created by liu meng on 2018/8/20.
//

#ifndef CUSTOMAPPVMP_DEXVERIFY_H
#define CUSTOMAPPVMP_DEXVERIFY_H
enum DexClassVerifyMode {
    VERIFY_MODE_UNKNOWN = 0,
    VERIFY_MODE_NONE,
    VERIFY_MODE_REMOTE,
    VERIFY_MODE_ALL
};
bool dvmVerifyClass(ClassObject* clazz);
#endif //CUSTOMAPPVMP_DEXVERIFY_H
