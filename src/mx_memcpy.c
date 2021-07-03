#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    unsigned char *from = (unsigned char *)src;
    unsigned char *new = (unsigned char *)dst;

    for (size_t i = 0; i < n; i++) {
        *new = *from;
        new++;
        from++;
    }

    return dst;
}
