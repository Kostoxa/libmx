#include "../inc/libmx.h"

t_list  *mx_create_node(void *data) {
	t_list *node = (t_list*)malloc(sizeof(t_list));

	if (node == NULL)
		return NULL;
	node->data = data;
	node->next = NULL;

	return node;	
}
/*
#include <stdio.h>

int main() {
	t_list *list = NULL;
	char c[] = "HELLOW";

	list = mx_create_node(c);
	printf("%ss", list->data);	

return 0;
}*/
