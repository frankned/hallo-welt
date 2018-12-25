#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int rtval(float *, int);

int main()
{
    float x[MAX] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i, sucesso;



    printf("Vetores antes de chamar a funcao:\n");

    for(i = 0; i < MAX; i++)
        printf("%.2f\n", x[i]);

    sucesso = rtval(x, MAX);

    printf("Vetores DEPOIS de chamar a funcao:\n");

    for(i = 0; i < MAX; i++)
        printf("%.2f\n", x[i]);


    return 0;
}

int rtval(float *vet, int N)
{
    int i;

    for(i = 0; i < N; i++)
        *(vet+i) = i;

    return 0;
}
