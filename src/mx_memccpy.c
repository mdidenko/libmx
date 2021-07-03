#include "../inc/libmx.h"

void *
mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    unsigned char *from = (unsigned char *)src;
    unsigned char *new = (unsigned char *)dst;
    unsigned char code = (unsigned char)c;

    for (size_t i = 0; i < n; i++) {
        *new = *from;
        if (*new == code) {
            return new + 1;
        }
        new++;
        from++;
    }

    return NULL;
}
