#include "../../inc/libmx.h"

void mx_pop_back(t_list **list) {
    t_list *cur = NULL;

    if (list && *list && (*list)->next) {
        cur = *list;
        while (cur->next->next)
            cur = cur->next;
        free(cur->next);
        cur->next = NULL;
    }
    else if (list && *list) {
        free(*list);
        *list = NULL;
    }
}
