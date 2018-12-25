/*
 * Materia: AED
 * Prof.: Alexandre Zaghetto
 * Aluno: Frank Ned Santa Cruz de Oliveira
 * Matricula: 170167062
 * Exercicio: Extremamente Basico
*/

#include <stdio.h>

int main()
{
    int n, c100, c50, c20, c10, c5, c2, c1;

    n = c100 = c50 = c20 = c10 = c5 = c2 = c1 = 0;

    scanf("%d", &n);

    if (n >= 0 && n <= 1000000)
        {
          c100 = n / 100;

//          if (c100 != 0)
            c50 = (n - (c100 * 100)) / 50;

//          if (c50 != 0)
            c20 = (n - ((c100 * 100) + (c50 * 50))) / 20;

//          if (c20 != 0)
            c10 = (n - ((c100 * 100) + (c50 * 50) +(c20 * 20))) / 10;

//          if (c10 != 0)
            c5 = (n - ((c100 * 100) + (c50 * 50) +(c20 * 20) + (c10 * 10))) / 5;

//          if (c5 != 0)
            c2 = (n - ((c100 * 100) + (c50 * 50) +(c20 * 20) + (c10 * 10) + (c5 * 5))) / 2;

//          if (c2 != 0)
            c1 = (n - ((c100 * 100) + (c50 * 50) +(c20 * 20) + (c10 * 10) + (c5 * 5) + (c2 * 2))) / 1;


        }

    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", c100);
    printf("%d nota(s) de R$ 50,00\n", c50);
    printf("%d nota(s) de R$ 20,00\n", c20);
    printf("%d nota(s) de R$ 10,00\n", c10);
    printf("%d nota(s) de R$ 5,00\n", c5);
    printf("%d nota(s) de R$ 2,00\n", c2);
    printf("%d nota(s) de R$ 1,00\n", c1);

    return 0;
}
