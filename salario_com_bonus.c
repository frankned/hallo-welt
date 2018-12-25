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
    char nome[10];
    double sal, totV, salT;

    scanf("%[^\n]", &nome);
    scanf("%lf", &sal);
    scanf("%lf", &totV);

    salT = (sal + (totV * 0.15));

    printf ("TOTAL = R$ %.2lf\n", salT);
    return 0;
}
