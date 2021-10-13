#include "../inc/header.h"

int mx_atoi(const char *str) {
    int result = 0;
    int neg = 1;
    int i = 0;
    while (str[i]) {
        if (mx_isspace(str[i])) {
            i++;
        }
        else {
            break;
        }
    }
    if (str[i] == '-') {
        neg = -1;
        i++;
    }
    if (str[i] == '+') {
        i++;
    }
    while (str[i]) {
        if (!mx_isdigit(str[i])) {
            return 0;
        }
        result = result * 10;
        result = result + (str[i] - 48);
        i++;
    }
    return (neg * result);
}

