#include "../inc/libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    unsigned int len1 = mx_strlen(s1);
    unsigned int len2 = mx_strlen(s2);

    for (unsigned int i = 0; i < len2; i++) {
        s1[len1 + i] = s2[i];
    }

    s1[len1 + len2] = '\0';
    return s1;
}
