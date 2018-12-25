#include <stdio.h>

int main()
    {
        int i;
        int *p;

        p = &i;
        *p = 5;

        printf("%d %d\n", i, *p);


        return 0;
    }
