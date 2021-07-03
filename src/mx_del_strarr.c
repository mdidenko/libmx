#include "../inc/libmx.h"

void mx_del_strarr(char ***arr) {
    for (unsigned int i = 0; (*arr)[i]; i++) {
        free((*arr)[i]);
    }
    free(*arr);
    *arr = NULL;
}
