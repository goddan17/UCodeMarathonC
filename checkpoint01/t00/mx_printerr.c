#include <unistd.h>

void mx_printerr(const char *s) {
    int count = 0;
    char i = s[0];
    while (i != '\0') {
        count++;
        i = s[count];
    }
    write(2, s, count);
}

