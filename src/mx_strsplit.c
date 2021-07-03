#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {
    if (!s)
        return NULL;

    char **new_str = (char **)malloc(
        (mx_count_words(s,c) + 1) * sizeof(char *));
    unsigned int i = 0;
    int count;

    for (unsigned int j = 0; s[j]; j++) {
        if (s[j] != c) {
            count = mx_letters(&s[j], c);
            new_str[i] = mx_strnew(count);
            for (int k = 0; k < count; k++) {
                new_str[i][k] = s[j];
                j++;
            }
            i++;
        }
    }

    new_str[i] = NULL;
    return new_str;
}
