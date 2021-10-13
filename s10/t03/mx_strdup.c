
#include "file_to_str.h"

char *mx_strdup(const char *str) {
    int n = mx_strlen(str);
    char *str1 = mx_strnew(n);
    mx_strcpy(str1, str);
    return str1;
}



