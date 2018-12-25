#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, j, **mat;
    int Nlin, Ncol;

    printf("N linhas M: ");
    scanf("%d", &Nlin);

    printf("N colunas M: ");
    scanf("%d", &Ncol);

    mat = (int **)malloc(Nlin*sizeof(int *));

    for(i = 0; i < Nlin; i++)
        *(mat+i) = (int *)malloc(Ncol*sizeof(int));

    for(i = 0; i < Nlin; i++)
    {
        for(j = 0; j < Ncol; j++)
        {
            printf("Digitte o valor para [%d][%d]: ", i, j);
            scanf("%d", *(mat+i)+j);
        }
    }


    for(i = 0; i < Nlin; i++)
    {
        for(j = 0; j < Ncol; j++)
        {
            printf("O valor para [%d][%d]: \n", i, j, *(*(mat+i)+j));
        }
    }



    return 0;
}
