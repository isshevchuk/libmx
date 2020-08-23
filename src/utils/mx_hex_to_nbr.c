#include "../../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    int size = mx_strlen(hex);
    unsigned long base = 1;
    unsigned long res = 0;

    for (int i = size - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9')
            res += (hex[i] - 48) * base;
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            res += (hex[i] - 55) * base;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            res += (hex[i] - 87) * base;
        else
            return 0;
        base *= 16;
    }
    return res;
}
