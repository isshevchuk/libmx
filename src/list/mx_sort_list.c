#include "../../inc/libmx.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
    t_list *ilist;
    t_list *jlist;

    if (list != NULL) {
        for (ilist = list; ilist != NULL; ilist = ilist->next) {
            for (jlist = ilist->next; jlist != NULL; jlist = jlist->next) {
                if (cmp(ilist->data, jlist->data) == true)
                    mx_swap_data(jlist, ilist);
            }
        }
    }
    return list;
}
