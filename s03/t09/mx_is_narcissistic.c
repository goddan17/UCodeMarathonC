#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
     if (num < 0) {
         return false;
     }
     int count = 0;
     int tempC = num;
     int tempN = num;
     while (temp != 0) {
         tempC /= 10;
         count++;
     }
     int sum = 0;
     while (tempN) {
         sum += mx_pow(tempN % 10, count);
         tempN /= 10;
     }
     return (num == sum);
}

