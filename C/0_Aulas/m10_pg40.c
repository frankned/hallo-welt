#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    double *p;

    int N, numero, i;

    printf("Qual o tamanho do vetor: ");
    scanf("%d", &N);

    p = (double *)malloc(N * sizeof(double));

    if(p == NULL)
    {
        printf("Nao existe espaco!\n");
        exit(1);
    }

    for(i = 0; i < N; i++)
    {
        printf("Digitte o valor %d do vetor: ", i);
        scanf("%lf", p+i);
    }



    for(i = 0; i < N; i++)
    {
        printf("O valor %d do vetor eh: %2lf \n", i, *(p+i));
    }

    free(p);


    return 0;
}
