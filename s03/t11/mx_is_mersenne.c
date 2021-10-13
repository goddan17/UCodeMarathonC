#include <stdbool.h>
double mx_pow(double n, unsigned int pow);
bool mx_is_prime(int num);

bool mx_is_mersenne(int n) {
    if (!mx_is_prime(n)) {
        return false;
    }
    bool mr = false;
    int rtl = 0;
    for (int c = 2; rlt <= n & !mr; ++c) {
       rlt = mx_pow(2, c) - 1;
       mr = (rlt == n);
    }
    return mr;
}


