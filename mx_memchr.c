#include "../inc/libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
	char *p_s = (char *) s;

	for (size_t i = 0; i < n; p_s++) {
		if (*p_s == c)
			return p_s;
		i++;
	}
	return NULL;
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char *s1 = NULL;
    printf("%s\n", mx_memchr(s1, 65, 8));
    printf("%s\n", memchr(s1, 65, 8));
return 0;
}*/
