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
    int n, c, pum;
    pum = 1;

    scanf("%d", &n);

      for (c = 1; c <= n; c++)
         {
           printf("%d %d %d PUM\n", pum, pum+1, pum+2);
           pum = pum+4;
         }


    return 0;
}
