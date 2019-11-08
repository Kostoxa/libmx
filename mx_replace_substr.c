#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
	char *news = NULL;
	int j = 0;
	int k = 0;
	int count = 0;
	int mult = mx_count_substr(str, sub);

	news =  mx_strnew(mx_strlen(str) - mx_strlen(sub) * mult + mx_strlen(replace) * mult);
	if (news == NULL || str == NULL || sub == NULL || replace == NULL)
		return NULL;
	for (int i = 0; i < mx_strlen(str); i++) {
		if (i == mx_get_substr_allindex(str, sub, count)) {
			while(replace[j]) {
				news[k] = replace[j];
				i++;
				k++;
				j++;
			}
				j = 0;
				count++;
			if (mx_strlen(sub) > mx_strlen(replace))
				i = i + (mx_strlen(sub) - mx_strlen(replace));
            else if (mx_strlen(sub) < mx_strlen(replace)) 
                i = i - (mx_strlen(replace) - mx_strlen(sub));
		}
		news[k] = str[i];
		k++;
	}
	return news;
}
/*
#include <stdio.h>

int main() {
char *str1 = "111alds 222alds 333alds 444alds 555alds";
char *str2 = "aldkis";
char *str3 = "7";
	printf("%s", mx_replace_substr(str1, str2, str3));
return 0;
}*/
