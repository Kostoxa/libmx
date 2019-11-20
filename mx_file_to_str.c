#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
	int fd = open(file, O_RDONLY);
	int size = 0;
	char buf;
	char *str = NULL;

	if (read(fd, NULL, 0) < 0 || fd == -1)
		return NULL;

	while (read(fd, &buf, 1))
		size++;
	close(fd);

	fd = open(file, O_RDONLY);
	str = mx_strnew(size);
	read(fd, str, size);
	close(fd);
	return str;
}
