#include <stdlib.h> 
#include "create_new_agents.h"

char *mx_strnew(const int size);

char *mx_strcpy(char *dst, const char *src);

int mx_strlen(const char *s);

char *mx_strdup(const char *str)
{
    if (str == NULL) return NULL;
    char *rv = mx_strnew(mx_strlen(str));
    return mx_strcpy(rv, str);
}

