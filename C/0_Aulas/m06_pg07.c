#include <stdio.h>

int main()
{
    float notas[3][8];
    int i, j;

    for(i = 0; i <= 2 ; i++)
        for(j = 0; j <= 7; j++)
        {
          printf("Nota: ");
          scanf("%f", &notas[i][j]);
        }

    for(i = 0; i <= 2; i++)
        for(j = 0; j <= 7; j++)
            printf("Nota[%d][%d] = %f\n", i, j, notas[i][j]);


    return 0;
}
