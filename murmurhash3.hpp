//-----------------------------------------------------------------------------
// MurmurHash3 was written by Austin Appleby, and is placed in the public
// domain. The author hereby disclaims copyright to this source code.

#ifndef MURMURHASH3_H
#define MURMURHASH3_H

//-----------------------------------------------------------------------------
// Platform-specific functions and macros
#include <stdint.h>

//-----------------------------------------------------------------------------

extern "C" void MurmurHash3_x86_32(const void *key, int len, uint32_t seed, void *out);

extern "C" uint64_t MurmurHash64A(const void *, int, unsigned int);
extern "C" uint64_t MurmurHash64B(const void *, int, unsigned int);

extern "C" void MurmurHash3_x86_128(const void *key, int len, uint32_t seed, void *out);

extern "C" void MurmurHash3_x64_128(const void *key, int len, uint32_t seed, void *out);

//-----------------------------------------------------------------------------


#endif								  // MURMURHASH3_H
