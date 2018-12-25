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
    int n1, n2, nt, c;

    scanf("%d", &n1);
    scanf("%d", &n2);

    if (n1 > n2)
       {
           nt = n1;
           n1 = n2;
           n2 = nt;
       }

       nt = 0;

      for (n1++; n1 < n2; n1++)
         {
          if (n1 % 2 != 0)
            {
              nt = nt + n1;
            }
          }



    printf("%d\n", nt);

    return 0;
}
