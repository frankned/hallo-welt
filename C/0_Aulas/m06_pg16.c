#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main()
{
    int i, j, numero, matriz[5][5];

    srand(time(NULL));

    for(i = 0; i <= 4; i++)
    {
        for(j = 0; j <= 4; j++)
        {
          matriz[i][j] = rand() % 10;
          printf("%d\t", matriz[i][j]);
        }
    printf("\n");
    }

    for(i = 0; i <= 4; i++)
        for(j = 0; j <= 4; j++)
        {
            if(i == j)
                printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }

    printf("\n");
    return 0;
}
