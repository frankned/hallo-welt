/*
 * Autor: Frank Ned Santa Cruz de Oliveira
 * e-mail: ppcafn@gmail.com
 * Data: 181102
 * Funcao: switch
 */

#include <stdio.h>

int main()
{
    float n = 0, nMA = 0, nME = 0;

    printf("Informe um numero: ");
    scanf("%f", &n);
    nME = nMA = n;

    while (n != -1)
    {
        if (n < nME)
          {
            nME = n;
          }
        else if (n > nMA)
          {
            nMA = n;
          }

        printf("Informe um numero: ");
        scanf("%f", &n);
    }

    printf("O menor numero informado foi: %f\n", nME);
    printf("O maior numero informado foi: %f\n\n", nMA);

    return 0;
}
