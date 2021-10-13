#include "calculator.h"

char *mx_strcpy(char *dst, const char *src) {
    while (*src != '\0') {
        *dst = *src;
	    dst++;
        src++;
    }
    return dst;
}

