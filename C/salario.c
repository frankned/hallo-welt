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
    int func, hr;
    float valHr, sal;

    scanf("%d", &func);
    scanf("%d", &hr);
    scanf("%f", &valHr);

    sal = hr * valHr;

    printf("NUMBER = %d\n", func);
    printf("SALARY = U$ %.2f\n", sal);


    return 0;
}
