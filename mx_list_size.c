#include "../inc/libmx.h"

int mx_list_size(t_list *list) {
	int count = 0;
	t_list *pl = list;
	
	while (pl != NULL) {
		pl = pl->next;
		count++;
	}
	return count;
}

/*
#include <stdio.h>

int main() {
    char s[] = "aaaa";
    char s1[] = "bbbbb";
    char s2[] = "cccccc";

    t_list *list = mx_create_node(s);

    mx_push_front(&list, s1);
    mx_push_front(&list, s2);
    printf("size: %d\n",  mx_list_size(list));
return 0;
}*/
