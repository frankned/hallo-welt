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
    int n, c;

    scanf("%d", &n);

    if (n > 1 && n <= 1000)
    {
      for (c = 1; c <= 10; c++)
         {
           printf("%d x %d = %d\n", c, n, c*n);

         }
    }

    return 0;
}
