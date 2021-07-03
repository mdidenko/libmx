#include "../inc/libmx.h"

void mx_str_reverse(char *s) {
    if (!s)
        return;

    unsigned int len, c;
    len = mx_strlen(s);
    c = 0;

    while (c < len) {
        len--;
        mx_swap_char(&s[c], &s[len]);
        c++;
    }
}
