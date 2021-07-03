#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
    if (!str)
        return NULL;

    unsigned int old_len, new_len, start, end;
    old_len = mx_strlen(str);
    if (old_len == 0)
        return mx_strnew(0);

    start = 0;
    while (str[start] == ' ' || mx_isspace(str[start]) == 1)
        start++;

    end = old_len - 1;
    while (str[end] == ' ' || mx_isspace(str[end]) == 1)
        end--;

    new_len = old_len - start - (old_len - 1 - end);

    char *new_str = mx_strnew(new_len);
    for (unsigned int i = 0; start <= end; start++, i++)
        new_str[i] = str[start];

    return new_str;
}
