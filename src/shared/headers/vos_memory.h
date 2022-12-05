#ifndef _VOS_MEMORY_H
#define _VOS_MEMORY_H
#include <stdint.h>

void* vos_memset(void* s, int c, uintptr_t sz);
void* vos_memcpy(void* s, void* d, uintptr_t n);

#endif