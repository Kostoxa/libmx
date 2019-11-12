#include "../inc/libmx.h"

void mx_pop_front(t_list **head)  {
	if(head != NULL) {
		t_list *pl = (*head)->next;
		free(*head);
		*head = pl;
	}
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
	mx_pop_front(&list);
    while (list != NULL) {
        printf("data: %s\n",  list->data);
        list = list->next;
    }

return 0;
}*/
