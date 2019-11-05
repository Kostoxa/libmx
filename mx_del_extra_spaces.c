#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {
	char * trims = NULL;
	int count = 0;
	int i = 0;
	int size = mx_strlen(trims);
	char *newstr = NULL;

	trims = mx_strtrim(str);
	while (trims[i]) {
		if (mx_isspace(trims[i] && mx_isspace(trims[i-1]))
			count++;
		i++;
	}
	newstr = mx_strnew(size - coun);
	for (int i = 0; i < size; i++) {
		while(!mx_isspace(trims[
	}

	
}

#include <stdio.h>

int main() {
	char *name = "\f  My name...     is  \r Neo  \t\n ";
	printf("%s", mx_del_extra_spaces(name));
 
return 0;
}
