#include <stdio.h>

int main()
    {
        int i, j;

        int *p;

        printf("%d %d\n", p, &i);
        p = &i;

        printf("%d %d\b", p, &i);

        return 0;
    }
