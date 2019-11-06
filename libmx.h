#ifndef LIBMX_H
#define LIBMX_H

#include <unistd.h>
#include <wchar.h>
#include <stdlib.h>
#include <stdbool.h>

void mx_printint(int n);
void mx_printchar(char c);
void mx_printstr(const char *s);
void mx_print_strarr(char **arr, const char *delim);
void mx_print_unicode(wchar_t c);
int mx_strlen(const char *s);
bool mx_isspace(char c);
int mx_nbrlen(int nbr);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strndup(const char *s1, size_t n);
char *mx_str_size_dup(const char *s1, size_t start, size_t end);
char *mx_nbr_to_hex(unsigned long nbr);
char *mx_strcpy(char *dst, const char *src);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_str_size_cpy(char *dst, const char *src, int start, int end);
int mx_strcmp(const char *s1, const char *s2);
void mx_strdel(char **str);
char *mx_spacedel(char *newstr, const char *str);
void mx_del_strarr(char ***arr);
char *mx_del_extra_spaces(const char *str);
char *mx_strtrim(const char *str);
double mx_pow(double n, unsigned int pow);
unsigned long mx_hex_to_nbr(const char *hex);
int mx_sqrt(int x);
int mx_bubble_sort(char **arr, int size);
int mx_quicksort(char **arr, int left, int right);
void mx_foreach(int *arr, int size, void (*f)(int));
int mx_binary_search(char **arr, int size, const char *s, int *count);
void mx_swap_int( int *i, int *y);
void mx_swap_char(char *s1, char *s2);
void mx_swap_str(char **s1, char **s2);

#endif
