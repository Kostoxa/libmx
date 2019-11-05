#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {
    int count = 0;

    if (str == NULL)
        return -1;
    for (int i = 0; i < mx_strlen(str); i++) {
        if (str[i] == c && (str[i+1] != '\0' && str[i+1] != c)) 
        	count++;
    }
	if (str[0] != c && count > 0)
		count++;
    if (count == 0)
		return -1;
    return count;
}
