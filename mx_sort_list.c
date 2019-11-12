#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
	t_list *pl = lst;
	t_list *buf;

	while (pl != NULL) {
		while (pl->next != NULL) {
			if (cmp) {
				store = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = store;
			}
			pl->next;
		}
	}
	return count;
}
