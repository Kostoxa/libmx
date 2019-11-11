#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {
	char **news;
	int i = 0;
    int k = 0;
	int start;
	int end;

	if (s == NULL || mx_count_words(s, c) == 0)
		return NULL;
	news = (char **)malloc(sizeof(char **) * mx_count_words(s, c) + 1);
	news[mx_count_words(s, c)] = NULL;
	while (s[i]) {
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		end = i;
		if (start != end) {
			news[k] = mx_str_size_dup(s, start, end);
			k++;
		}
	}
	return news;
}
/*
#include <stdio.h>

int main() {
	char *s = "**Good bye,**Mr.*Anderson.****";
	char **arr = mx_strsplit(s, '*');
	for (int i = 0; arr[i]; i++)
		printf("%s\n", arr[i]);
return 0;
}*/
