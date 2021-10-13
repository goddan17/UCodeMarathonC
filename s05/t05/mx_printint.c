void mx_printchar(char);

void mx_printint(int n) {
    char arr[55];
    long c = n;
    int i = 0;

    if (c == 0)
        mx_printchar(n + '0');
    if (c < 0) {
        c *= -1;
        mx_printchar('-');
    }

    while (c != 0) {
        arr[i++] = (c % 10) + '0';
        c /= 10;
    }

    for (int j = i - 1; j >= 0; j--)
        mx_printchar(arr[j]);
}


