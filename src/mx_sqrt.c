int mx_sqrt(int x) {
    if (x <= 0)
        return 0;

    if (x == 1)
        return 1;

    int half = x / 2;
    if (half > 46340)
        half = 46340;

    for (int i = 1; i <= half; i++) {
        if (i * i == x) {
            return i;
        }
    }

    return 0;
}
