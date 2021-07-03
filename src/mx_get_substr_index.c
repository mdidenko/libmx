#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    if (!str || !sub)
        return -2;

    unsigned int str_len = mx_strlen(str);
    unsigned int sub_len = mx_strlen(sub);
    int other = str_len - sub_len;

    for (int i = 0; other - i >= 0; i++) {
        if (mx_strncmp(str, sub, sub_len) == 0) {
            return i;
        }
        str++;
    }

    return -1;
}
