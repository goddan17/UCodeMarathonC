#include <unistd.h>

void mx_printchar(char c) {
    char* ss = &c;
    write(1, ss, 1);
}

