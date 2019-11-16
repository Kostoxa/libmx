#include "../inc/libmx.h"
ihfhsfh
bool cmp(void *a, void *b) {
    char *pa = (char *) a;
    char *pb = (char *) b;
    if (mx_strcmp(pa, pb) > 0)
        return true;
    else
        return false;
}
