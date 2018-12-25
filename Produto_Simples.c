/*
 * Materia: AED
 * Prof.: Alexandre Zaghetto
 * Aluno: Frank Ned Santa Cruz de Oliveira
 * Matricula: 170167062
 * Exercicio: Produto Simples
*/

#include <stdio.h>

int v1, v2, prod;

int main()
{
    printf("Informe o primeiro valor: ");
    scanf("%d", &v1);

    printf("Informe o segundo valor: ");
    scanf("%d", &v2);

    prod = v1 * v2;

    printf("PROD = %d\n", prod);

    return 0;
}

