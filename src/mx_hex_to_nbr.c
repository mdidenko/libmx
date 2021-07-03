unsigned long mx_hex_to_nbr(const char *hex) {
    if (!hex)
        return 0;

    unsigned long nbr = 0;
    int current;
    while (*hex) {
        current = 0;
        if (*hex > 64 && *hex < 91) {
            current = *hex - 65 + 10;
        }
        else if (*hex > 96 && *hex < 123) {
            current = *hex - 97 + 10;
        }
        else {
            current = *hex - '0';
        }
        nbr = nbr * 16 + current;
        hex++;
    }
    return nbr;
}
