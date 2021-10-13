void mx_printchar();
  
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


