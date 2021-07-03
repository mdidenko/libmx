#include "../inc/libmx.h"

void mx_pop_front(t_list **head) {
    if (!*head)
        return;

    t_list *node = *head;
    *head = node->next;
    free(node);
}
