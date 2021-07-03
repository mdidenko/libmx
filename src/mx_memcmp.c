#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    unsigned char *str_1 = (unsigned char *)s1;
    unsigned char *str_2 = (unsigned char *)s2;

    for (size_t i = 0; i < n; i++) {
        if (*str_1 != *str_2) {
            return *str_1 - *str_2;
        }
        str_1++;
        str_2++;
    }

    return 0;
}
