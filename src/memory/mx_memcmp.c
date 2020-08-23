#include "../../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    unsigned char *ms1 = (unsigned char *)s1;
    unsigned char *ms2 = (unsigned char *)s2;

    while (n--) {
        if (*ms1 != *ms2)
            return *ms1 - *ms2;
        ms1++;
        ms2++;
    }
    return 0;
}
