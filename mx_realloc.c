#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
	char *newp = mx_strnew(size);
	char *p_ptr = (char *) ptr;

	mx_memcpy(newp, p_ptr, size);
	return newp;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char b[] = "fgdhryteh";
    mx_realloc(b, 20);
    printf("%s ", b);
return 0;
}*/
