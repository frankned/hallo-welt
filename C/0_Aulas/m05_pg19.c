#include <stdio.h>

int main()
{
    float notas[] = {1, 2, 3};
    int i;

    for(i = 0; i < 3; i++)
        printf("Nota %d = %f\n", i, notas[i]);

    return 0;
}
