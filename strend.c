
#include "strend.h"
int strend(char *s, char *t) {
    int len_s = strlen(s);
    int len_t = strlen(t);

    if (len_t > len_s)
        return 0;

    s += len_s - len_t;

    while (*t != '\0') {
        if (*s != *t)
            return 0;
        s++;
        t++;
    }

    return 1;
}
