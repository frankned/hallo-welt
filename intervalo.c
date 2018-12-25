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
    float val;

    scanf("%f", &val);

    if (val >= 0 && val <= 25.0000)
        printf("Intervalo [0,25]\n");
    else if (val > 25 && val <= 50.0000000)
        printf("Intervalo (25,50]\n");
    else if (val > 50 && val <= 75.0000000)
        printf("Intervalo (50,75]\n");
    else if (val > 75 && val <= 100)
        printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");

    return 0;
}

