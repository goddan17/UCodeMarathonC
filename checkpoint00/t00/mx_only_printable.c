#include <unistd.h>

void mx_only_printable(void) {
    for (int i = 126; i >= 32; i--) {
        char c = i;
        write(1, &c, 1);
    }
    write(1, "\n", 1);
}
