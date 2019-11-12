#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
	t_list *node = mx_create_node(data);
	t_list *pl = *list;
	while (pl->next != NULL) {
		pl = pl->next;
	}
	pl->next = node;    
}
/*
#include <stdio.h>

int main() {
    char s[] = "aaaa";
    char s1[] = "bbbbb";
    char s2[] = "cccccc";

    t_list *list = mx_create_node(s);

    mx_push_back(&list, s1);
    mx_push_back(&list, s2);
    while (list != NULL) {
        printf("data: %s\n", list->data);
        list = list->next;
    }

return 0;
}*/
