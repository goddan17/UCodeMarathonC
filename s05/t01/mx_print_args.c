
void mx_printchar(char s);
void mx_printstr(const char *s);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    if (argc > 1) {
        int i;
        for (int i = 1; i < argc; i++) {
            mx_printstr(argv[i]);
        }
    }
    return 0;
}

