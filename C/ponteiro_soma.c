#include <stdio.h>

int main()
    {
        int i, *p;

        i = 1000;

        p = &i;

        printf("%d %d %d\n", i, p, *p);

        *p++;
         p++;

        printf("%d %d %d\n", i, p, *p);

        return 0;
    }
