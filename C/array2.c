#include <stdio.h>

int main()
    {
        int a[5];
/*
        a[0] = 0;
        a[1] = 1;
        a[2] = 2;
        a[3] = 3;
        a[4] = 4;
*/

        int i;

        for (i = 0; i < 5; i++)
            {
                a[i] = i;
            }

        for (i = 0; i < 5; i++)
            {
                printf("a[%d] = %d\n", i, a[i]);
            }


        return 0;
    }
