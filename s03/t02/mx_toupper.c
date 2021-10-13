
int mx_toupper(int c) {
    if (c >= 97 && c <= 122) {
        c += -32;
        return c;
    }
    else if (c >= 65 && c <= 90) {
        return c;
    }
    return 0;
}

