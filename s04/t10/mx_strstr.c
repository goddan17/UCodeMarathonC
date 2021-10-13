
int mx_strlen(const char *);
int mx_strncmp(const char *, const char *, int);
char *mx_strchr(const char *, int);

char *mx_strstr(const char *s1, const char *s2) {
    const char *p = s1;
    int len = mx_strlen(s2);
    for (; (p = mx_strchr(p, *s2)) != 0; p++) {
        if (mx_strncmp(p, s2, len) == 0) {
            return (char *) p;
        }
    }
    return 0;
}

