#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    unsigned int needle_len = mx_strlen(needle);
    if (needle_len <= 0)
        return (char *)haystack;

    while (*haystack) {
        if (*haystack == *needle &&
            mx_strncmp(haystack, needle, needle_len) == 0) {
            return (char*)haystack;
        }
        haystack++;
    }

    return NULL;
}
