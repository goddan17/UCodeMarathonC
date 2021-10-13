void  mx_printchar(char s);
int  mx_strcmp(const char *s1, const char *s2);
void mx_printstr(const char *s);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    if (argc > 0) {
        for (int i = 0; i < argc; i++) {
            for (int j = i + 1; j < argc; j++) {
                if ((mx_strcmp(argv[i], argv[j])) > 0) {
                    char *c = argv[i];
                    argv[i] = argv[j];
                    argv[j] = c;
                }
            }
        }
        for (int i = 1; i < argc; i++) {
            mx_printstr(argv[i]);
            mx_printchar('\n');
        }
    }
    return 0;
}


