#include <stdlib.h>

int mx_strlen(const char *s) 
{
    int j = 0;
    char i = s[0];
    while(i != '\0') {
        j++;
        i = s[j];
    }
    return j;
}

char *mx_strcpy(char *dst, const char *src)
{
	char *saved = dst;
    while (*src)
    {
        *dst++ = *src++;
    }
    *dst = 0;
    return saved;
}

char *mx_strnew(const int size)
{
    if(size < 1) return NULL;
    char *string = (char*)malloc(size + 1);
    for(int i = 0; i <= size; i++)
        string[i] = '\0';
    return string;
}

char *mx_strdup(const char *str) {
    if (str == NULL) return NULL;
    char *rv = mx_strnew(mx_strlen(str));
    return mx_strcpy(rv, str);
}

