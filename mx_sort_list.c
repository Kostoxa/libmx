#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
	t_list *pli = lst;
	t_list *plj = lst;
	t_list *buf;

	while (pli->next != NULL) {
		while (plj->next != NULL) {
			if (cmp(plj->data, plj->next->data)) {
				buf = mx_create_node(plj->data);
				plj->data = plj->next->data;
				plj->next->data = buf->data;
				free(buf);
			}
			plj = plj->next;
		}
		plj = lst;
		pli = pli->next;
	}
	return lst;
}
/*
#include <stdio.h>

int main() {
    char s[] = "aaaa";
    char s1[] = "bbbbb";
    char s2[] = "cccccc";
    char s3[] = "ddddddd";
    char s4[] = "eeeeeeee";
    char s5[] = "fffffffff";
    char s6[] = "gggggggggg";

    t_list *list = mx_create_node(s);

    mx_push_front(&list, s1);
    mx_push_front(&list, s5);
    mx_push_front(&list, s3);
    mx_push_front(&list, s2);
    mx_push_front(&list, s6);
    mx_push_front(&list, s4);
	mx_sort_list(list, cmp);
    while (list != NULL) {
        printf("%s ",  list->data);
        list = list->next;
    }
return 0;
}*/
