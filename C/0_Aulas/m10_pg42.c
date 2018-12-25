#include <stdio.h>
#include <stdlib.h>



int main()
{
    double *p;
    int N, M, numero, i;

    printf("Qual o tamanho do vetor: ");
    scanf("%d", &N);

    p = (double *)calloc(N, sizeof(double));

    if(p == NULL)
    {
        printf("Sem espaco para alocar.\n");
        exit(1);
    }

    for(i = 0; i < N; i++)
    {
        printf("Informe o valor: ");
        scanf("%lf", p+i);
    }

    for(i = 0; i < N; i++)
        printf("O valor de %d eh: %lf\n", i, *(p+i));


    printf("Qual o novo tamanho do vetor: ");
    scanf("%d", &M);

    p = (double *)realloc(p, M * sizeof(double));

    if(p == NULL)
    {
        printf("mpossivel realocar\n");
        exit(2);
    }

    for(i = N; i < M; i++)
    {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%lf", p+i);
    }


    for(i = 0; i < M; i++)
        printf("O valor de %d eh: %lf\n", i, *(p+i));

    free(p);

    return 0;
}
