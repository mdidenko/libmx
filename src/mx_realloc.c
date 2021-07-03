#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    if (!ptr)
        return malloc(size);

    unsigned char *temp = (unsigned char *)ptr;
    size_t old_size = malloc_size(ptr);
    if (old_size >= size)
        return ptr;

    unsigned char *new = (unsigned char *)malloc(size);
    if (!new)
        return NULL;

    mx_memmove(new, temp, old_size);
    free(ptr);
    return new;
}
