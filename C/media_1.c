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
    double a, b, m;

    scanf("%lf", &a);
    scanf("%lf", &b);

    if ((a >= 0 && a <= 10.0) && (b >= 0 && b <= 10.0))
        {
            m = ((a * 3.5) + (b * 7.5)) / 11;
            printf("MEDIA = %.5lf\n", m);
        }


    return 0;
}
