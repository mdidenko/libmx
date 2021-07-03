#include "../inc/libmx.h"

void mx_push_front(t_list **list, void *data) {
	if (!list)
		return;

	t_list *begin = mx_create_node(data);
	begin->next = *list;
	*list = begin;
}
