
void mx_printchar(char s);
void mx_printstr(const char *s);
void mx_printint(int n);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    mx_printstr(argv[0]);
    mx_printint(argc);
    mx_printchar('\n');
    return 0;
}

