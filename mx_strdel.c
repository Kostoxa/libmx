void mx_strdel(char **str) {
	if (str != NULL) {
		free(*str);
		*str = NULL;
	}
}
