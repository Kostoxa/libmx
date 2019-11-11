#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
	char *buf = NULL;
	char *p_src = (char *) src;
	char *p_dst = (char *) dst;

	buf = malloc(len);
	mx_memcpy(buf, p_src, len);
	mx_memcpy(p_dst, buf, len);
	return dst;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char b[20] = "fgdhryteh";
    char c[30] = "IEOEKDFUYOT";
    mx_memcpy(c, b, 15);
    printf("%s ", c);
    printf("\n");
    char m[30] = "fgdhryteh";
    char n[30] = "IEOEKDFUYOT";
    memcpy(n, m, 15);
    printf("%s ", c);
    printf("\n");
    char p[30] = "fgdhryteh";
    char l[30] = "IEOEKDFUYOT";
    mx_memmove(l, p, 15);
    printf("%s ", c);
    printf("\n");
    char a[20] = "fgdhryteh";
    char k[30] = "IEOEKDFUYOT";
	memmove(k, a, 15);
    printf("%s ", k);
return 0;
}*/
