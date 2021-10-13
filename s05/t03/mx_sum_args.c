#include <stdbool.h>
void mx_printchar(char s);
void mx_printint(int n);
int mx_atoi(const char *str);
bool mx_isspace(char c);
bool mx_isdigit(int c);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        return 0;
    }
    int sum = 0;
    for (int i = 1; i < argc; i++) {
        
        sum += mx_atoi(argv[i]);
    }
    mx_printint(sum);
    mx_printchar('\n');
    return 0;
}

