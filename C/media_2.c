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
    double a, b, c, media;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if ((a >= 0 && a <= 10) && (b >= 0 && b <= 10) && (c >= 0 && c <= 10))
        media = ((a*2) + (b*3) + (c*5))/10;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}
