#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
    if (!file)
        return NULL;

    int fd = open(file, O_RDONLY);
    if (fd == -1)
        return NULL;

    char sym;
    unsigned int counter = 0;
    while (read(fd, &sym, 1) > 0) {
        counter++;
    }
    close(fd);

    char *str = mx_strnew(counter);
    int fd_1 = open(file, O_RDONLY);
    if (read(fd_1, str, counter) <= 0) {
        str = NULL;
    }
    close(fd_1);
    return str;
}
