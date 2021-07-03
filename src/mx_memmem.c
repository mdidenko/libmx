#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little,
        size_t little_len) {
    if (!big || !little || big_len == 0 || little_len == 0 || big_len < little_len)
        return NULL;

    unsigned char *bg = (unsigned char *)big;
    unsigned char *lt = (unsigned char *)little;

    size_t cmp_len = big_len - little_len;
    for (size_t i = 0; i < cmp_len; i++) {
        if (mx_memcmp(bg, lt, little_len) == 0) {
            return (void *)bg;
        }
        bg++;
    }

    return NULL;
}
