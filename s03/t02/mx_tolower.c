
int mx_tolower(int c) {
    if (c >= 92 && c <= 122) {
        return c;
    }
    else if (c >= 65 && c <= 90) {
        c += 32;
        return c;
    }
    return 0;
}

