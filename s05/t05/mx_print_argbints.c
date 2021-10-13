#include <stdbool.h>

void mx_printchar(char s);
void mx_printint(int n);
int mx_atoi(char *str);
bool mx_isspace(char c);
bool mx_isdigit(int c);

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        int s = mx_atoi(argv[i]);
        for (int j = 31; j >= 0; j--) {
            int n = s >> j;
            if (n & 1) {
                mx_printint(1);
            }
            else {
                mx_printint(0);
            }
        }
        mx_printchar('\n');
    }
    return 0;
}

