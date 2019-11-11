#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    char *p_dst = (char *) dst;
    char *p_src = (char *) src;

    for (size_t i = 0; i < n; i++)
        p_dst[i] = p_src[i];
    return dst;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char b[] = "AkjdghBCDEFGH";
	char c[] = "AkjdghBCDEFGH";
    mx_memcpy(&b[2], &b[5], 10);
    printf("%s ", b);
    printf("\n");
    memcpy(&c[2], &c[5], 10);
	printf("%s ", b);
return 0;
}*/
