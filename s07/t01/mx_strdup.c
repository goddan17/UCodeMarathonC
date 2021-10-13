
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str) {
    int n = mx_strlen(str);
    char *str1 = mx_strnew(n);
    mx_strcpy(str1, str);
    return str1;
}



