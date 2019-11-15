#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
	int fop = open(file, O_RDONLY);
	int size = 0;
	char buf;
	char *str = NULL;

	if (read(fop, NULL, 0) < 0)
        return NULL;
    else if (fop == -1) 
        return NULL;

	while (read(fop, &buf, 1))
		size++;
	close(fop);

	fop = open(file, O_RDONLY);
	str = mx_strnew(size);
	read(fop, str, size);
	close(fop);
	return str;
}
/*
#include <stdio.h>

int main() {
	printf("%s", mx_file_to_str("re."));
	return 0;
}
*/
