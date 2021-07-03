int mx_count_words(const char *str, char c) {
    if (!str)
        return -1;

    unsigned int i = 0, alpha = 0, count = 0;

    while (str[i] != '\0') {
        while (str[i] != c && str[i] != '\0') {
            alpha++;
            i++;
        }
        if (alpha > 0) {
            count++;
            alpha = 0;
        }
        if (str[i] != '\0')
            i++;
    }

    return count;
}
