#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    unsigned char *str = (unsigned char *)s + n;
    unsigned char code = (unsigned char)c;

    while (n--) {
        if (*str == code) {
            return str;
        }
        str--;
    }

    return NULL;
}
