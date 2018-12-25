#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, *mat;
    int Nlin, Ncol;

    printf("N linhas M: ");
    scanf("%d", &Nlin);

    printf("N colunas M: ");
    scanf("%d", &Ncol);

    mat = (int *)malloc(Nlin * Ncol * sizeof(int));

    for(i = 0; i < Nlin; i++)
    {
        for(j = 0; j < Ncol; j++)
        {
            printf("Difite o valor da [%d] [%d]:", i, j);
            scanf("%d", mat+(i*Ncol)+j);
        }
    }



        for(i = 0; i < Nlin; i++)
    {
        for(j = 0; j < Ncol; j++)
        {
            printf("O valor de [%d] [%d] eh %d:\n", i, j, *(mat+(i*Nlin)+j));
        }
    }

    free(mat);

    return 0;
}
