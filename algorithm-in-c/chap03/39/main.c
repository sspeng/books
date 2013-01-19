#include <stdio.h>
#include "list.h"

int main(void)
{
    int i;
    list_t head;
    head = list_new();

    for (i = 0; i < 10; i++) {
        list_t nn = list_newnode(i);
        list_insert(head, nn);
    }

    list_for(head, print);
    list_rm_if(head, is_even); /* remove the elements that has even entry */
    list_for(head, print);
    list_free(head);
    return 0;
}
