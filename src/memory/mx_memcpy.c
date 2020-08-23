#include "../../inc/libmx.h"

void *mx_memcpy(void *restrict dst,
                const void *restrict src, size_t n) {
    unsigned char *mdst = (unsigned char *)dst;
    unsigned char *msrc = (unsigned char *)src;

    while (n--)
        *(mdst++) = *(msrc++);
    return dst;
}
