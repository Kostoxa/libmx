#include "../inc/libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
	static int line_size = 0;
	static int i;
	static int j; 
	static char buf;
	
	if (read(fd, NULL, 0) < 0 || fd == -1)
		return -2;

	lineptr = (char **)malloc(sizeof(char **) * mx_count_words(str, delimc) + 1);
	lineptr[mx_count_words(s, c)] = NULL;
	while (read(fd, &buf, size) && line_size <= buf_size) {
		
	}
	read(fd, lineptr, size);
news = (char **)malloc(sizeof(char **) * mx_count_words(s, c) + 1);
	read(fd, lineptr, size);
	return line_size; 
}
