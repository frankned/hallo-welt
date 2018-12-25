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
                a[i] = 0;
            }

        printf(" a[0] = %d\n a[1] = %d\n a[2] = %d\n a[3] = %d\n a[4] = %d\n", a[0], a[1], a[2], a[3], a[4]);

        return 0;
    }
