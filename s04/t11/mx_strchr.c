
char *mx_strchr(const char *s, int c) {
    while (*s) {
        if (!*s++) {
            return 0;
        }
        if (*s == c) {
            return (char*)s;
        }
    }
    return 0;
}

