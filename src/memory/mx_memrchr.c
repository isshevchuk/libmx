#include "../../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    unsigned char *ms = (unsigned char *)s + n;

    while (n--) {
        if (*ms != (unsigned char)c)
            ms--;
        else
            return ms;
    }
    return NULL;
}
