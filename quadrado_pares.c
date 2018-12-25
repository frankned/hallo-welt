/*
 * Materia: AED
 * Prof.: Alexandre Zaghetto
 * Aluno: Frank Ned Santa Cruz de Oliveira
 * Matricula: 170167062
 * Exercicio: Extremamente Basico
*/


#include <stdio.h>
#include <math.h>

int main()
{
    int n, c, qd;

    scanf("%d", &n);

    if (n > 1 && n < 2000)
    {
      for (c = 1; c <= n; c++)
         {
          if (c % 2 == 0)
            {
             qd = pow(c,2);
             printf("%d^2 = %d\n", c, qd);
            }
         }
    }

    return 0;
}
