#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    if (!nbr) {
        char *null_hex = mx_strnew(1);
        *null_hex = '0';
        return null_hex;
    }

    unsigned long n = nbr;
    unsigned int str_length = mx_long16_number_len(n);
    char *hex = mx_strnew(str_length);

    for (int i = str_length - 1; i >= 0; i--) {
        n = nbr % 16;
        if (n < 10)
            hex[i] = n + 48;
        else
            hex[i] = n + 87;
        nbr /= 16;
    }

    return hex;
}

unsigned int mx_long16_number_len(long number) {
    unsigned int str_length = 1;
    while (number / 16) {
        str_length++;
        number /= 16;
    }
    return str_length;
}
