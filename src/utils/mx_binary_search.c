#include "../../inc/libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    unsigned left = *count = 0;
    unsigned right = size - 1;
    unsigned middle;

    while (left <= right) {
        middle = (left + right) / 2;
        ++*count;
        if (mx_strcmp(arr[middle], s) == 0)
            return middle;
        else if (mx_strcmp(arr[middle], s) > 0)
            right = middle - 1;
        else
            left = middle + 1;
    }
    *count = 0;
    return -1;
}
