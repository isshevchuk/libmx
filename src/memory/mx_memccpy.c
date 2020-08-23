#include "../../inc/libmx.h"

void *mx_memccpy(void *restrict dst,
                 const void *restrict src, int c, size_t n) {
    unsigned char *mdst = (unsigned char *)dst;
    unsigned char *msrc = (unsigned char *)src;
    size_t i = 0;

    if (n == 0)
        return NULL;
    while (i < n) {
        mdst[i] = msrc[i];
        if (msrc[i] == c)
            return (void *)&(mdst[i + 1]);
        i++;
    }
    return NULL;
}
