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
    int tempo, hh, mm, ss;

    scanf("%d", &tempo);

    hh = tempo / 3600;
    mm = (tempo % 3600) / 60;
    ss = (tempo %3600) % 60;

    printf("%d:%d:%d\n", hh, mm, ss);

    return 0;
}
