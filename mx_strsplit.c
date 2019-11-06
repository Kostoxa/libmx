#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {
	char **news = NULL;
	int i = 0;
	int start = 0;
	int end = 0;
	int k = 0;
	int j;
	//int size = mx_strlen(s);

	while (s[i]) {
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c)
			i++;
		end = i;
		news[k] = mx_str_size_dup(s, start, end);
		i++;
		k++;
		
	}
	return news;
}

#include <stdio.h>

int main() {
	char s[] = "**Good bye,**Mr.*Anderson.****";
	char **arr = mx_strsplit(s, '*');
	for (int i = 0; i < 3; i++) {
		printf("%s\n", arr[i]);
	}
return 0;
}
