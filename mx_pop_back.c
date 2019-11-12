#include "../inc/libmx.h"

void mx_pop_back(t_list **head)  {
	t_list *p = *head;

    if ((*head)->next == NULL) {
		free(*head);
		(*head) = NULL;
	}
	else {
		while (p->next->next != NULL) {
			p = p->next;
		}
		free(p->next);
		p->next = NULL;
	}
}
/*
#include <stdio.h>

int main() {
    char s[] = "aaaa";
//    char s1[] = "bbbbb";
  //  char s2[] = "cccccc";

    t_list *list = mx_create_node(s);

    //mx_push_front(&list, s1);
   // mx_push_front(&list, s2);
    mx_pop_back(&list);
    while (list != NULL) {
        printf("data: %s\n",  list->data);
        list = list->next;
    }

return 0;
}*/
