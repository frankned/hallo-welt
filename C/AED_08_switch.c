/*
 * Autor: Frank Ned Santa Cruz de Oliveira
 * e-mail: ppcafn@gmail.com
 * Data: 181102
 * Funcao: switch
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1, n2;
    int op;

    printf("Informe o primeiro numero: ");
    scanf("%f", &n1);

    printf("Informe o segundo numero: ");
    scanf("%f", &n2);

    printf("Escolha a operacao\n");
    printf("1 - Soma\n");
    printf("2 - Subttracao\n");
    printf("3 - Divisao\n");
    printf("4 - Multiplicacao\n");
    printf("Opcao: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("O resultando da soma de %f + %f = %f\n", n1, n2, n1 + n2);
        break;
    case 2:
        printf("O resultado da subtracao de %f - %f = %f\n", n1, n2, n1 - n2);
        break;
    case 3:
        printf("O resultado da divisão de %f / %f = %f\n", n1, n2, n1 / n2);
        break;
    case 4:
        printf("O resultado da multiplicao de %f * %f = %f\n", n1, n2, n1 * n2);
        break;
    default:
        printf("Operacao escolhida eh invalida!!!\n\n");
    }

    return 0;
}
