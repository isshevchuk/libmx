#include "../../inc/libmx.h"

char *mx_itoa(int number) {
    char *res;
    long n = number;
    int count = mx_lenght_of_digit(n);
    int min = 0;

    res = mx_strnew(count);
    if (n == 0) {
        res[0] = '0';
        return res;
    }
    if (n < 0) {
        res[0] = '-';
        min++;
        n *= -1;
    }
    for (int i = count - 1; i >= min; i--) {
        res[i] = (n % 10) + '0';
        n /= 10;
    }
    return res;
}
