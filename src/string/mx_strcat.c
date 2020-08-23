#include "../../inc/libmx.h"

char *mx_strcat(char *s1, const char *s2) {
    int i;
    int len = mx_strlen(s1);

    for (i = 0; s2[i] != '\0'; i++) {
        s1[len + i] = s2[i];
    }
    s1[len + i] = '\0';
    return s1;
}
