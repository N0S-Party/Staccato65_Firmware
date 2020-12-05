#pragma once

#include "quantum.h"

#define LAYOUT( \
    k1,  k2,  k3,  k4,  k5,  k6,  k7,  k8,  k9,  k10, k11, k12, k13,  k14,         k60, kRotEnc, \
     k15, k16, k17, k18, k19, k20, k21, k22, k23, k24, k25, k26, k27,  k28,        k65, \
       k29, k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k40,  k41,           k66, \
        k42,  k43, k44, k45, k46, k47, k48, k49, k50, k51, k52,  k53,         k64, \
     k54,  k55,  k56,              k57,                     k58,  k59,   k61, k62, k63 \
) { \
    { k1, k8, k15, k22, k29, k36, k42, k49, k54, k61 }, \
    { k2, k9, k16, k23, k30, k37, k43, k50, k55, k62 }, \
    { k3, k10, k17, k24, k31, k38, k44, k51, k56, k63 }, \
    { k4, k11, k18, k25, k32, k39, k45, k52, k57, k64 }, \
    { k5, k12, k19, k26, k33, k40, k46, k53, k58, k65 }, \
    { k6, k13, k20, k27, k34, k41, k47, KC_NO, k59, k66 }, \
    { k7, k14, k21, k28, k35, KC_NO, k48, KC_NO, k60, kRotEnc } \
}
