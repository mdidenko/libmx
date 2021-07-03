#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char *from = (unsigned char *)src;
    unsigned char *new = (unsigned char *)dst;
    unsigned char *temp = (unsigned char *)malloc(len);
    mx_memcpy(temp, from, len);
    mx_memcpy(new, temp, len);
    free(temp);
    return dst;
}
