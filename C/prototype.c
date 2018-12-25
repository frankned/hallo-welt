#include <stdio.h>

int add(int, int);

int main()
    {
        printf("%d\n", add(3, 7));

        return 0;
    }

int add(int i, int j)
    {
        return i + j;
    }
