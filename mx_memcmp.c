#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
	char *p_s1 = (char *) s1;
	char *p_s2 = (char *) s2;

	for (size_t i = 0; i < n; i++) {
		if (p_s1[i] != p_s2[i])
			return p_s1[i] - p_s2[i];
	}
	return 0;
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "CDEFGH";
    char s2[] = "CDEFGHyuyuy";
    printf("%d\n", mx_memcmp(s1, s2, 8));
	printf("%i\n", memcmp(s1, s2, 8));
return 0;
}*/
