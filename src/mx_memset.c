#include "../inc/libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    unsigned char *new = (unsigned char *)b;
    unsigned char code = (unsigned char)c;

    for (size_t i = 0; i < len; i++) {
        new[i] = code;
    }

    return b;
}
