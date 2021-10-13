

int mx_strlen(const char *s) {
    int ss = 0;
    while (*s) {
        s++;
        ss++;
    }
    return ss;
}

