#include "../inc/libmx.h" 

//kjgsgf
void mx_del_strarr(char ***arr) {
	char **parr = *arr;

	for (int i = 0; parr[i] != NULL; i++)
		mx_strdel(&parr[i]);
    free(arr);
    arr = NULL;	
}
