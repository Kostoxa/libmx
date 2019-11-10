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
    int b[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59};//char b[] = "AkjdghkhghhdhBCDEFGH";
	int c[20];
    int k[20];
    mx_memcpy(c, b, 20);
    for (int i=0; i<20; i++)
        printf("%c ", c[i]);
    printf("\n");
    memcpy(k, b, 20);
    for (int i=0; i<12; i++)
        printf("%c ", k[i]);
return 0;
}*/
