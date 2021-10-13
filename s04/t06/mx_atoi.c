
#include <stdbool.h>
bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str) {
    int n = 0;
    int negative = 1;
    if (*str == '-') {
        negative = -1;
        str++;
    }
    while (*str != '\0') {
        if (mx_isspace(*str)) {
            break;
        }
        if (*str == '-') {
            break;
        }
        n *= 10;
        n += *str++;
        n -= '0';
    }
    return (negative * n);
}

