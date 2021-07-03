#include "../inc/libmx.h"

char *mx_itoa(int number) {
    long num = number;
    int str_length = mx_long10_number_len(num);
    char *str = mx_strnew(str_length);
    if (number < 0)
        num *= -1;

    for (int i = str_length - 1; i >= 0; i--) {
        if (i == 0 && number < 0)
            str[0] = '-';
        else {
            str[i] = num % 10 + '0';
            num /= 10;
        }
    }

    return str;
}

unsigned int mx_long10_number_len(long number) {
    unsigned int str_length = 1;
    if (number < 0)
        str_length++;

    while (number /= 10)
        str_length++;

    return str_length;
}
