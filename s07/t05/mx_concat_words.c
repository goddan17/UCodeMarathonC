char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);


char *mx_concat_words(char **words) {
    if (!words) {
        return NULL;
    }
    char *str = NULL;
    while (*words != NULL) {
        str = mx_strjoin(str, *words++);
        if (*words != NULL) {
            str = mx_strjoin(str, " ");
        }
    }
    mx_strdel(words);
    return str;
}



