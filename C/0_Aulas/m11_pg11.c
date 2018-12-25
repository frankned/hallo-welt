#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int numero;

    fp = fopen("arq.txt", "a");

    if(fp == NULL)
    {
        printf("Erro de abertura\n");
        exit(1);
    }

    do
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);

        if(numero != -1)
        {
            fprintf(fp, "%d\n", numero);
        }

    }while(numero != -1);


    fclose(fp);

    return 0;
}
