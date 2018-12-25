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
    double x1, y1, x2, y2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

// Distancia entre os pontos
    printf("%.4lf\n", sqrt(pow(x2 - x1, 2) + pow(y2 - y1,2)));

    return 0;
}
