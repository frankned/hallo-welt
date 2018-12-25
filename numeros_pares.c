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
    int n;
    n = 0;

    for (n = 1; n <= 100; n++)
    {
        if (n % 2 == 0)
            printf("%d\n", n);
    }

    return 0;
}
