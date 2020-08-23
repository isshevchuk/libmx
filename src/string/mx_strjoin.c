#include "../../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    char *result;
    int size;

    if (s1 == NULL && s2 == NULL)
        return NULL;
    else if (s1 == NULL) {
        if (!(result = mx_strdup(s2)))
            return NULL;
    }
    else if (s2 == NULL) {
        if (!(result = mx_strdup(s1)))
            return NULL;
    }
    else {
        size = mx_strlen(s1) + mx_strlen(s2);
        result = mx_strnew(size);
        mx_strcat(result, s1);
        mx_strcat(result, s2);
    }
    return result;
}
