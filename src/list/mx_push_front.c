#include "../../inc/libmx.h"

void mx_push_front(t_list **list, void *data) {
    t_list *new;

    if (*list == NULL)
        *list = mx_create_node(data);
    else {
        new = malloc(sizeof(t_list));
        new->data = data;
        new->next = *list;
        *list = new;
    }
}
