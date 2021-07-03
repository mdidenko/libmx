#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
    t_list *sorted;
    t_list *copy = lst;

    while (lst != NULL) {
        sorted = copy;
        while (sorted != NULL) {
            if (sorted->next && cmp(sorted->data, sorted->next->data)) {
                swap_nodes(&(sorted->data), &(sorted->next->data));
            }
            sorted = sorted->next;
        }
        lst = lst->next;
    }

    return sorted;
}

void swap_nodes(void **n1, void **n2) {
    void *temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
