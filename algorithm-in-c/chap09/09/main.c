#include <stdlib.h>
#include <stdio.h>

#include "pq.h"

int main(void)
{
    int n = 100;
    pq_t pq = pq_init(n);
    int i;

    for (i = 0; i < 10; i++) {
        int item = rand() % 100;
        printf("%3d ", item);
        pq_insert(pq, item);
    }

    putchar('\n');

    while (!pq_empty(pq)) {
        printf("%3d ", pq_delmax(pq));
    }

    putchar('\n');
    pq_finalize(&pq);
    return 0;
}
