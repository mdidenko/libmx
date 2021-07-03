#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
    if (!list)
        return;

    t_list *node = *list;
    if (!node) {
        *list = mx_create_node(data);
        return;
    }

    while (node->next != NULL) {
        node = node->next;
    }

    node->next = mx_create_node(data);
}
