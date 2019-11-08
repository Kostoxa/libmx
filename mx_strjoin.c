#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
	char *join = NULL;
	char *copyS1 = NULL;
    char *copyS2 = NULL;

	if (s1 == NULL && s2 == NULL) {
		return NULL;
	}
	else if (s1 == NULL) {
		join = mx_strdup(s2);
	}
	else if (s2 == NULL) {
		join = mx_strdup(s1);
	}
	else {
		copyS1 = mx_strdup(s1);
		copyS2 = mx_strdup(s2);
		join = mx_strnew(mx_strlen(copyS2) + mx_strlen(copyS2));
		join = mx_strcat(copyS1, copyS2);
	}
	return join;
}
/*
#include <stdio.h>

int main() {
	char str1[] = "this";
	char str2[] = "dodge ";
	char *str3 = NULL;
printf("%s\n", mx_strjoin(str2, str3));
	printf("%s\n", mx_strjoin(str2, str1));
	printf("%s\n", mx_strjoin(str2, str3)); 
	printf("%s\n", mx_strjoin(str3, str3));
return 0;
}*/
