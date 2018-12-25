/*
 * Autor: Frank Ned Santa Cruz de Oliveira
 * e-mail: ppcafn@gmail.com
 * Data: 181102
 * Funcao: switch
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int n, n1, n2;
    float soma2;

    n = 1000;

    while (n <= 9999)
    {
        n1 = n/100;
        n2 = n - (100*n1);

        soma2 = pow(n1+n2,2);

        if (soma2 == n)
        {
            printf("n: %d | n1: %d | n2: %d | soma: %.0f\n\n", n, n1, n2, soma2);
        }

        n++;
    }



    return 0;
}
