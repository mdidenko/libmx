#include "../inc/libmx.h"

void mx_print_unicode(wchar_t c) {
    char sym[4];
    unsigned int len = 0;

    if (c < 128) {
        sym[0] = ((c >> 0) & 127) | 0;
        len = 1;
    }
    else if (c < 2048) {
        sym[0] = ((c >> 6) & 31) | 192;
        sym[1] = ((c >> 0) & 63) | 128;
        len = 2;
    }
    else if (c < 65536) {
        sym[0] = ((c >> 12) & 15) | 224;
        sym[1] = ((c >> 6) & 63) | 128;
        sym[2] = ((c >> 0) & 63) | 128;
        len = 3;
    }
    else {
        sym[0] = ((c >> 18) & 7) | 240;
        sym[1] = ((c >> 12) & 63) | 128;
        sym[2] = ((c >> 6) & 63) | 128;
        sym[3] = ((c >> 0) & 63) | 128;
        len = 4;
    }

    write(1, sym, len);
}
