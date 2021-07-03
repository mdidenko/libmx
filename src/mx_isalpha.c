int mx_isalpha(int sym) {
    if (sym > 96 && sym < 123)
        return 1;

    if (sym > 64 && sym < 91)
        return 2;

    return 0;
}
