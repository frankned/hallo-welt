#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int numero;

    fp = fopen("arq.txt", "r");

    if(fp == NULL)
    {
        printf("Erro de abertura\n");
        exit(1);
    }

    fscanf(fp, "%d", &numero);

    while(!feof(fp))
    {
        printf("%d\n", numero);
        fscanf(fp, "%d", &numero);
    }

    fclose(fp);
    return 0;
}
