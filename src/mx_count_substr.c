#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    if (!str || !sub)
        return -1;

    unsigned int str_len = mx_strlen(str);
    unsigned int sub_len = mx_strlen(sub);
    int other = str_len - sub_len;

    if (sub_len == 0 || other < 0)
        return 0;

    int counter = 0;
    for (int i = 0; other - i >= 0; i++) {
        if (mx_strncmp(str, sub, sub_len) == 0) {
            counter++;
        }
        str++;
    }

    return counter;
}
