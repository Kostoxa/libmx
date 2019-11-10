#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    char *p_dst = (char *) dst;
    char *p_src = (char *) src;

    for (size_t i = 0; i < n; i++) {
        p_dst[i] = p_src[i];
		if (p_src[i] == c)
			break;
	}
    return dst;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char b[] = "AkjdghkhghhdhBCDEFGH";
    char c[20];
    char k[20];
    mx_memccpy(c, b, 'W', 20);
    for (int i=0; i<20; i++)
        printf("%c ", c[i]);
    printf("\n");
    memccpy(k, b, 'W', 20);
    for (int i=0; i<20; i++)
        printf("%c ", k[i]);
return 0;
}*/
