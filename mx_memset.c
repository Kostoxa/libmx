#include "../inc/libmx.h"

void *mx_memset(void *b, int c, size_t len) {
	char *p_b = (char *) b;

	for (size_t i = 0; i < len; i++)
		*p_b++ = c;
	return b;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
	char b[] = "ABCDEFGH";
	mx_memset(b, 52, 5);
	for (int i=0; i<9; i++)
    	printf("%c ", b[i]);
    printf("\n");
  char k[] = "ABCDEFGH";
    memset(k, 52, 5);
	for (int i=0; i<9; i++)
    	printf("%c ", k[i]);
return 0;
}*/
