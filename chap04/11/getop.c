#include <stdio.h>
#include "getop.h"

int getop(char *s)
{
    int c, i;
    static int lastc = 0;

    if (lastc == 0) {
        c = getchar();
    }
    else {
        c = lastc;
        lastc = 0;
    }

    while ((s[0] = c) == ' ' || c == '\t') {
        c = getch();
    }

    s[1] = '\0';
    i = 0;
    if (!isdigit(c) && c != '.') {
        return c;
    }

    if (isdigit(c)) {
        while (isdigit(s[++i] = c = getch())) {
            ;
        }
    }

    if (c == '.') {
        while (isdigit(s[++i] = c = getch())) {
            ;
        }
    }

    s[i] = '\0';
    if (c != EOF) {
        lastc = c;
    }

    return NUMBER;
}
