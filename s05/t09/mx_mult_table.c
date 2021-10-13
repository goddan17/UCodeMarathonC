#include <stdbool.h>
#include <stdio.h>
void mx_printint(int n);
void mx_printchar(char s);
int mx_atoi(char *str);

int main(int argc, char *argv[]) {
    if (argc < 2 && argc >= 3) {
        return 0;
    }
    int n1, n2;
    n1 = mx_atoi(argv[1]);
    n2 = mx_atoi(argv[2]);
    if ((n1 < 1 || n1 > 10) || (n2 < 1 || n2 > 10)) {
        return 0;
    }
    if (n1 <= 0 || n2 <= 0) {
        return 0;
    }
    if (n1 > n2) {
        int s = n1;
        n1 = n2;
        n2 = s;
    }
    for (int i = n1; i <= n2; i++) {
        for (int j = n1; j <= n2; j++) {
            mx_printint(i * j);
            if (j != n2) {
                mx_printchar('\t');
            }
        }
        mx_printchar('\n');
    }
    return 0;
}

