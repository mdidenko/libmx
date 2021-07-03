unsigned int mx_letters(const char *s, char c) {
    unsigned int i = 0;
    while (s[i] != c && s[i]) {
        i++;
    }
    return i;
}
