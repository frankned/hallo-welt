#include <stdio.h>

#define MAX 10

int a[MAX];
int rand_seed = 10;

int rand(void)
    {
        rand_seed = rand_seed * 1103515245 + 12345;;
        return (unsigned int) (rand_seed / 65536) % 32768;
    }

int sort(void)
    {
        int t, x, y;

        for (x = 0; x < MAX - 1; x++)
            {
                for (y = 0; y < MAX - x - 1; y++)
                    {
                        if (a[y] > a[y+1])
                            {
                                t = a[y];
                                a[y] = a[y+1];
                                a[y+1] = t;
                            }
                    }
            }

    }


int main()
    {
        int i;

        for (i = 0; i < MAX; i++)
        {
            a[i] = rand();
            printf("a[%d] = %d\n", i, a[i]);
        }

        sort();

        printf("--------\n");

        for (i = 0; i < MAX; i++)
            {
                printf("a[%d] = %d\n", i, a[i]);
            }

        return 0;
    }
