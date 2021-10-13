#include <unistd.h>

void mx_printchar(char s) {
    char* ss = &s;
    write(1, ss, 1);
}

