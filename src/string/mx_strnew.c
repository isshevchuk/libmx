#include "../../inc/libmx.h"

char *mx_strnew(const int size) {
    char *str = NULL;
    int i = 0;

    if (size < 0)
        return NULL;
    str = (char *)malloc(sizeof(char) * (size + 1));
    if (!str)
        return NULL;
    while (i < size + 1){
        str[i] = '\0';
        i++;
    }
    return str;
}
