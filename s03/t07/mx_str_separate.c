
void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
    int f = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i-1] == str[i] && str[i] == delim) {
            continue;
        }
        if (str[i] == delim && f == 0) {
            mx_printchar('\n');
            f++;
        }
        else {
            mx_printchar(str[i]);
            f = 0;
        }
    }
    mx_printchar('\n');
}

