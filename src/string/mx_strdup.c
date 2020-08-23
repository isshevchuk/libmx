#include "../../inc/libmx.h"

char *mx_strdup(const char *str) {
    char *new = mx_strnew(mx_strlen(str));

    if (!new)
        return NULL;
    mx_strcpy(new, str);
    return new;
}
