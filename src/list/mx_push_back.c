#include "../../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *cur = *list;

    if (*list == NULL)
        *list = mx_create_node(data);
    else {
        while (cur->next)
            cur = cur->next;
        cur->next = malloc(sizeof(t_list));
        cur->next->data = data;
        cur->next->next = NULL;
    }
}
