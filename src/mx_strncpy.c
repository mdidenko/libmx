char *mx_strncpy(char *dst, const char *src, int len) {
    char *new = dst;
    for (int i = 0; i < len; i++) {
        dst[i] = src[i];
    }
    return new;
}
