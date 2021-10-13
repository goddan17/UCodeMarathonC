
int mx_gcd(int a, int b) {
    if (a < 0) {
        a = -a;
    }
    if (b < 0) {
        b = -b;
    }
    if (a == 0 || b == 0) {
        return 0;
    }
    else if (a == b) {
        return a;
    }
    else if (a > b) {
        int res = mx_gcd(a - b, b);
        return res;
    }
    else {
        int res = mx_gcd(a, b - a);
        return res;
    }
}



