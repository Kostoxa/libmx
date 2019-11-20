#include "../inc/libmx.h"

void mx_pop_back(t_list **head)  {
	t_list *p = NULL;

	if (*head == NULL || head == NULL)
		return;

	if ((*head)->next == NULL) {
		free(*head);
		(*head) = NULL;
	}
	else {
		p = *head;
		while (p->next->next != NULL) {
			p = p->next;
		}
		free(p->next);
		p->next = NULL;
	}
}
