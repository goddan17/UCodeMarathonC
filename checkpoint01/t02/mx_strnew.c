#include <stdlib.h>

char *mx_strnew(const int size) {
    if (size < 0) {
        return NULL;
    }
    char *arr = (char*)malloc(size + 1);
    int i = 0;
    while (i < size) {
        arr[i] = '\0';
        i++;
    }
    arr[i] = '\0';
    return arr;
}

