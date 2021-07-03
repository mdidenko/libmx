#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    unsigned int str_length = mx_strlen(s1);
    if (str_length < n)
        n = str_length;

    char *dup_line = mx_strnew(n);
    if (!dup_line)
        return NULL;

    return mx_strncpy(dup_line, s1, n);
}
