#include <stdint.h>
#include <stdbool.h>
#include <x86intrin.h>
#include "liblow.h"

#include "femul.h"

typedef unsigned int uint128_t __attribute__((mode(TI)));

#if (defined(__GNUC__) || defined(__GNUG__)) && !(defined(__clang__)||defined(__INTEL_COMPILER))
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=81294
#define _subborrow_u32 __builtin_ia32_sbb_u32
#define _subborrow_u64 __builtin_ia32_sbb_u64
#endif

#undef force_inline
#define force_inline __attribute__((always_inline))

void force_inline femul(uint64_t* out, uint64_t x32, uint64_t x33, uint64_t x31, uint64_t x29, uint64_t x27, uint64_t x25, uint64_t x23, uint64_t x21, uint64_t x19, uint64_t x17, uint64_t x15, uint64_t x13, uint64_t x11, uint64_t x9, uint64_t x7, uint64_t x5, uint64_t x62, uint64_t x63, uint64_t x61, uint64_t x59, uint64_t x57, uint64_t x55, uint64_t x53, uint64_t x51, uint64_t x49, uint64_t x47, uint64_t x45, uint64_t x43, uint64_t x41, uint64_t x39, uint64_t x37, uint64_t x35)
{  uint128_t x64 = (((uint128_t)x5 * x62) + (((uint128_t)x7 * x63) + (((uint128_t)x9 * x61) + (((uint128_t)x11 * x59) + (((uint128_t)x13 * x57) + (((uint128_t)x15 * x55) + (((uint128_t)x17 * x53) + (((uint128_t)x19 * x51) + (((uint128_t)x21 * x49) + (((uint128_t)x23 * x47) + (((uint128_t)x25 * x45) + (((uint128_t)x27 * x43) + (((uint128_t)x29 * x41) + (((uint128_t)x31 * x39) + (((uint128_t)x33 * x37) + ((uint128_t)x32 * x35))))))))))))))));
{  uint128_t x65 = ((((uint128_t)x5 * x63) + (((uint128_t)0x2 * (x7 * x61)) + (((uint128_t)x9 * x59) + (((uint128_t)0x2 * (x11 * x57)) + (((uint128_t)x13 * x55) + (((uint128_t)0x2 * (x15 * x53)) + (((uint128_t)x17 * x51) + (((uint128_t)0x2 * (x19 * x49)) + (((uint128_t)x21 * x47) + (((uint128_t)0x2 * (x23 * x45)) + (((uint128_t)x25 * x43) + (((uint128_t)0x2 * (x27 * x41)) + (((uint128_t)x29 * x39) + (((uint128_t)0x2 * (x31 * x37)) + ((uint128_t)x33 * x35))))))))))))))) + (0x11 * ((uint128_t)0x2 * (x32 * x62))));
{  uint128_t x66 = ((((uint128_t)x5 * x61) + (((uint128_t)x7 * x59) + (((uint128_t)x9 * x57) + (((uint128_t)x11 * x55) + (((uint128_t)x13 * x53) + (((uint128_t)x15 * x51) + (((uint128_t)x17 * x49) + (((uint128_t)x19 * x47) + (((uint128_t)x21 * x45) + (((uint128_t)x23 * x43) + (((uint128_t)x25 * x41) + (((uint128_t)x27 * x39) + (((uint128_t)x29 * x37) + ((uint128_t)x31 * x35)))))))))))))) + (0x11 * (((uint128_t)x33 * x62) + ((uint128_t)x32 * x63))));
{  uint128_t x67 = ((((uint128_t)x5 * x59) + (((uint128_t)0x2 * (x7 * x57)) + (((uint128_t)x9 * x55) + (((uint128_t)0x2 * (x11 * x53)) + (((uint128_t)x13 * x51) + (((uint128_t)0x2 * (x15 * x49)) + (((uint128_t)x17 * x47) + (((uint128_t)0x2 * (x19 * x45)) + (((uint128_t)x21 * x43) + (((uint128_t)0x2 * (x23 * x41)) + (((uint128_t)x25 * x39) + (((uint128_t)0x2 * (x27 * x37)) + ((uint128_t)x29 * x35))))))))))))) + (0x11 * (((uint128_t)0x2 * (x31 * x62)) + (((uint128_t)x33 * x63) + ((uint128_t)0x2 * (x32 * x61))))));
{  uint128_t x68 = ((((uint128_t)x5 * x57) + (((uint128_t)x7 * x55) + (((uint128_t)x9 * x53) + (((uint128_t)x11 * x51) + (((uint128_t)x13 * x49) + (((uint128_t)x15 * x47) + (((uint128_t)x17 * x45) + (((uint128_t)x19 * x43) + (((uint128_t)x21 * x41) + (((uint128_t)x23 * x39) + (((uint128_t)x25 * x37) + ((uint128_t)x27 * x35)))))))))))) + (0x11 * (((uint128_t)x29 * x62) + (((uint128_t)x31 * x63) + (((uint128_t)x33 * x61) + ((uint128_t)x32 * x59))))));
{  uint128_t x69 = ((((uint128_t)x5 * x55) + (((uint128_t)0x2 * (x7 * x53)) + (((uint128_t)x9 * x51) + (((uint128_t)0x2 * (x11 * x49)) + (((uint128_t)x13 * x47) + (((uint128_t)0x2 * (x15 * x45)) + (((uint128_t)x17 * x43) + (((uint128_t)0x2 * (x19 * x41)) + (((uint128_t)x21 * x39) + (((uint128_t)0x2 * (x23 * x37)) + ((uint128_t)x25 * x35))))))))))) + (0x11 * (((uint128_t)0x2 * (x27 * x62)) + (((uint128_t)x29 * x63) + (((uint128_t)0x2 * (x31 * x61)) + (((uint128_t)x33 * x59) + ((uint128_t)0x2 * (x32 * x57))))))));
{  uint128_t x70 = ((((uint128_t)x5 * x53) + (((uint128_t)x7 * x51) + (((uint128_t)x9 * x49) + (((uint128_t)x11 * x47) + (((uint128_t)x13 * x45) + (((uint128_t)x15 * x43) + (((uint128_t)x17 * x41) + (((uint128_t)x19 * x39) + (((uint128_t)x21 * x37) + ((uint128_t)x23 * x35)))))))))) + (0x11 * (((uint128_t)x25 * x62) + (((uint128_t)x27 * x63) + (((uint128_t)x29 * x61) + (((uint128_t)x31 * x59) + (((uint128_t)x33 * x57) + ((uint128_t)x32 * x55))))))));
{  uint128_t x71 = ((((uint128_t)x5 * x51) + (((uint128_t)0x2 * (x7 * x49)) + (((uint128_t)x9 * x47) + (((uint128_t)0x2 * (x11 * x45)) + (((uint128_t)x13 * x43) + (((uint128_t)0x2 * (x15 * x41)) + (((uint128_t)x17 * x39) + (((uint128_t)0x2 * (x19 * x37)) + ((uint128_t)x21 * x35))))))))) + (0x11 * (((uint128_t)0x2 * (x23 * x62)) + (((uint128_t)x25 * x63) + (((uint128_t)0x2 * (x27 * x61)) + (((uint128_t)x29 * x59) + (((uint128_t)0x2 * (x31 * x57)) + (((uint128_t)x33 * x55) + ((uint128_t)0x2 * (x32 * x53))))))))));
{  uint128_t x72 = ((((uint128_t)x5 * x49) + (((uint128_t)x7 * x47) + (((uint128_t)x9 * x45) + (((uint128_t)x11 * x43) + (((uint128_t)x13 * x41) + (((uint128_t)x15 * x39) + (((uint128_t)x17 * x37) + ((uint128_t)x19 * x35)))))))) + (0x11 * (((uint128_t)x21 * x62) + (((uint128_t)x23 * x63) + (((uint128_t)x25 * x61) + (((uint128_t)x27 * x59) + (((uint128_t)x29 * x57) + (((uint128_t)x31 * x55) + (((uint128_t)x33 * x53) + ((uint128_t)x32 * x51))))))))));
{  uint128_t x73 = ((((uint128_t)x5 * x47) + (((uint128_t)0x2 * (x7 * x45)) + (((uint128_t)x9 * x43) + (((uint128_t)0x2 * (x11 * x41)) + (((uint128_t)x13 * x39) + (((uint128_t)0x2 * (x15 * x37)) + ((uint128_t)x17 * x35))))))) + (0x11 * (((uint128_t)0x2 * (x19 * x62)) + (((uint128_t)x21 * x63) + (((uint128_t)0x2 * (x23 * x61)) + (((uint128_t)x25 * x59) + (((uint128_t)0x2 * (x27 * x57)) + (((uint128_t)x29 * x55) + (((uint128_t)0x2 * (x31 * x53)) + (((uint128_t)x33 * x51) + ((uint128_t)0x2 * (x32 * x49))))))))))));
{  uint128_t x74 = ((((uint128_t)x5 * x45) + (((uint128_t)x7 * x43) + (((uint128_t)x9 * x41) + (((uint128_t)x11 * x39) + (((uint128_t)x13 * x37) + ((uint128_t)x15 * x35)))))) + (0x11 * (((uint128_t)x17 * x62) + (((uint128_t)x19 * x63) + (((uint128_t)x21 * x61) + (((uint128_t)x23 * x59) + (((uint128_t)x25 * x57) + (((uint128_t)x27 * x55) + (((uint128_t)x29 * x53) + (((uint128_t)x31 * x51) + (((uint128_t)x33 * x49) + ((uint128_t)x32 * x47))))))))))));
{  uint128_t x75 = ((((uint128_t)x5 * x43) + (((uint128_t)0x2 * (x7 * x41)) + (((uint128_t)x9 * x39) + (((uint128_t)0x2 * (x11 * x37)) + ((uint128_t)x13 * x35))))) + (0x11 * (((uint128_t)0x2 * (x15 * x62)) + (((uint128_t)x17 * x63) + (((uint128_t)0x2 * (x19 * x61)) + (((uint128_t)x21 * x59) + (((uint128_t)0x2 * (x23 * x57)) + (((uint128_t)x25 * x55) + (((uint128_t)0x2 * (x27 * x53)) + (((uint128_t)x29 * x51) + (((uint128_t)0x2 * (x31 * x49)) + (((uint128_t)x33 * x47) + ((uint128_t)0x2 * (x32 * x45))))))))))))));
{  uint128_t x76 = ((((uint128_t)x5 * x41) + (((uint128_t)x7 * x39) + (((uint128_t)x9 * x37) + ((uint128_t)x11 * x35)))) + (0x11 * (((uint128_t)x13 * x62) + (((uint128_t)x15 * x63) + (((uint128_t)x17 * x61) + (((uint128_t)x19 * x59) + (((uint128_t)x21 * x57) + (((uint128_t)x23 * x55) + (((uint128_t)x25 * x53) + (((uint128_t)x27 * x51) + (((uint128_t)x29 * x49) + (((uint128_t)x31 * x47) + (((uint128_t)x33 * x45) + ((uint128_t)x32 * x43))))))))))))));
{  uint128_t x77 = ((((uint128_t)x5 * x39) + (((uint128_t)0x2 * (x7 * x37)) + ((uint128_t)x9 * x35))) + (0x11 * (((uint128_t)0x2 * (x11 * x62)) + (((uint128_t)x13 * x63) + (((uint128_t)0x2 * (x15 * x61)) + (((uint128_t)x17 * x59) + (((uint128_t)0x2 * (x19 * x57)) + (((uint128_t)x21 * x55) + (((uint128_t)0x2 * (x23 * x53)) + (((uint128_t)x25 * x51) + (((uint128_t)0x2 * (x27 * x49)) + (((uint128_t)x29 * x47) + (((uint128_t)0x2 * (x31 * x45)) + (((uint128_t)x33 * x43) + ((uint128_t)0x2 * (x32 * x41))))))))))))))));
{  uint128_t x78 = ((((uint128_t)x5 * x37) + ((uint128_t)x7 * x35)) + (0x11 * (((uint128_t)x9 * x62) + (((uint128_t)x11 * x63) + (((uint128_t)x13 * x61) + (((uint128_t)x15 * x59) + (((uint128_t)x17 * x57) + (((uint128_t)x19 * x55) + (((uint128_t)x21 * x53) + (((uint128_t)x23 * x51) + (((uint128_t)x25 * x49) + (((uint128_t)x27 * x47) + (((uint128_t)x29 * x45) + (((uint128_t)x31 * x43) + (((uint128_t)x33 * x41) + ((uint128_t)x32 * x39))))))))))))))));
{  uint128_t x79 = (((uint128_t)x5 * x35) + (0x11 * (((uint128_t)0x2 * (x7 * x62)) + (((uint128_t)x9 * x63) + (((uint128_t)0x2 * (x11 * x61)) + (((uint128_t)x13 * x59) + (((uint128_t)0x2 * (x15 * x57)) + (((uint128_t)x17 * x55) + (((uint128_t)0x2 * (x19 * x53)) + (((uint128_t)x21 * x51) + (((uint128_t)0x2 * (x23 * x49)) + (((uint128_t)x25 * x47) + (((uint128_t)0x2 * (x27 * x45)) + (((uint128_t)x29 * x43) + (((uint128_t)0x2 * (x31 * x41)) + (((uint128_t)x33 * x39) + ((uint128_t)0x2 * (x32 * x37))))))))))))))))));
{  uint64_t x80 = (uint64_t) (x79 >> 0x1f);
{  uint64_t x81 = ((uint64_t)x79 & 0x7fffffff);
{  uint128_t x82 = (x80 + x78);
{  uint64_t x83 = (uint64_t) (x82 >> 0x1e);
{  uint64_t x84 = ((uint64_t)x82 & 0x3fffffff);
{  uint128_t x85 = (x83 + x77);
{  uint64_t x86 = (uint64_t) (x85 >> 0x1f);
{  uint64_t x87 = ((uint64_t)x85 & 0x7fffffff);
{  uint128_t x88 = (x86 + x76);
{  uint64_t x89 = (uint64_t) (x88 >> 0x1e);
{  uint64_t x90 = ((uint64_t)x88 & 0x3fffffff);
{  uint128_t x91 = (x89 + x75);
{  uint64_t x92 = (uint64_t) (x91 >> 0x1f);
{  uint64_t x93 = ((uint64_t)x91 & 0x7fffffff);
{  uint128_t x94 = (x92 + x74);
{  uint64_t x95 = (uint64_t) (x94 >> 0x1e);
{  uint64_t x96 = ((uint64_t)x94 & 0x3fffffff);
{  uint128_t x97 = (x95 + x73);
{  uint64_t x98 = (uint64_t) (x97 >> 0x1f);
{  uint64_t x99 = ((uint64_t)x97 & 0x7fffffff);
{  uint128_t x100 = (x98 + x72);
{  uint64_t x101 = (uint64_t) (x100 >> 0x1e);
{  uint64_t x102 = ((uint64_t)x100 & 0x3fffffff);
{  uint128_t x103 = (x101 + x71);
{  uint64_t x104 = (uint64_t) (x103 >> 0x1f);
{  uint64_t x105 = ((uint64_t)x103 & 0x7fffffff);
{  uint128_t x106 = (x104 + x70);
{  uint64_t x107 = (uint64_t) (x106 >> 0x1e);
{  uint64_t x108 = ((uint64_t)x106 & 0x3fffffff);
{  uint128_t x109 = (x107 + x69);
{  uint64_t x110 = (uint64_t) (x109 >> 0x1f);
{  uint64_t x111 = ((uint64_t)x109 & 0x7fffffff);
{  uint128_t x112 = (x110 + x68);
{  uint64_t x113 = (uint64_t) (x112 >> 0x1e);
{  uint64_t x114 = ((uint64_t)x112 & 0x3fffffff);
{  uint128_t x115 = (x113 + x67);
{  uint64_t x116 = (uint64_t) (x115 >> 0x1f);
{  uint64_t x117 = ((uint64_t)x115 & 0x7fffffff);
{  uint128_t x118 = (x116 + x66);
{  uint64_t x119 = (uint64_t) (x118 >> 0x1e);
{  uint64_t x120 = ((uint64_t)x118 & 0x3fffffff);
{  uint128_t x121 = (x119 + x65);
{  uint64_t x122 = (uint64_t) (x121 >> 0x1f);
{  uint64_t x123 = ((uint64_t)x121 & 0x7fffffff);
{  uint128_t x124 = (x122 + x64);
{  uint64_t x125 = (uint64_t) (x124 >> 0x1e);
{  uint64_t x126 = ((uint64_t)x124 & 0x3fffffff);
{  uint64_t x127 = (x81 + (0x11 * x125));
{  uint64_t x128 = (x127 >> 0x1f);
{  uint64_t x129 = (x127 & 0x7fffffff);
{  uint64_t x130 = (x128 + x84);
{  uint64_t x131 = (x130 >> 0x1e);
{  uint64_t x132 = (x130 & 0x3fffffff);
out[0] = x126;
out[1] = x123;
out[2] = x120;
out[3] = x117;
out[4] = x114;
out[5] = x111;
out[6] = x108;
out[7] = x105;
out[8] = x102;
out[9] = x99;
out[10] = x96;
out[11] = x93;
out[12] = x90;
out[13] = x131 + x87;
out[14] = x132;
out[15] = x129;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[16];