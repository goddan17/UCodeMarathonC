#include <unistd.h>

void mx_printchar(char s) {
    char* ss = &s;
    write(1, ss, 1);
}

void mx_printint(int n) {
    int a_n = n;
    int b_n = 0;
    int i = 0;

    while (n > 0) {
        b_n = n % 10;
        n -= b_n;
        n = n / 10;
        i++;
    }
    n = a_n;
    int matrix_n[i];
    int count = 0;

    while (n > 0) {
        b_n = n % 10;
        n -= b_n;
        n = n / 10;
        matrix_n[count] = b_n;
        count++;
    }
    for (int i = count - 1; i >= 0; i--) {
       mx_printchar(matrix_n[i] + 48);
    }
}

int mx_strlen(const char *s) {
    int size = 0;
    while(*s != '\0') {
        s++;
        size++;
    }
    return size;
}

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
    write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
    mx_printstr(argv[0]);
    mx_printint(argc);
    mx_printchar('\n');
    return 0;
}

