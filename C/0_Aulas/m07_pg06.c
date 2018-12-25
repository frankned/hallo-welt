#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[50];
    char nome2[50];

    printf("Digite seu nome: ");
//    scanf("%[^\n]", &nome[0]);
    gets(nome);

    printf("O nome eh: %s\n", strcpy(nome2, nome));
//    puts(nome);

    return 0;
}
