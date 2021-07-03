#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    if (!s1 && !s2)
        return NULL;
    else if (!s1)
        return mx_strdup(s2);
    else if (!s2)
        return mx_strdup(s1);

    unsigned int s1_length = mx_strlen(s1);
    unsigned int s2_length = mx_strlen(s2);
    unsigned int sum_length = s1_length + s2_length;
    char *buffer = mx_strnew(sum_length + 1);
    if (!buffer)
        return NULL;

    for (unsigned int i = 0; i < s1_length; i++)
        buffer[i] = s1[i];

    buffer = mx_strcat(buffer, s2);
    buffer[sum_length] = '\0';
    return buffer;
}
