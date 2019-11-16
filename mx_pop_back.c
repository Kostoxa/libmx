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
