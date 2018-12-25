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
    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

// Area Triangulo: (a*c)/2
    printf("TRIANGULO: %.3lf\n", (a*c)/2);

// Area Circulo = 3.14159*(pow(r,2))
    printf("CIRCULO: %.3lf\n", 3.14159*(pow(c,2)));

// Area Trapezio = ((a+b)*c)/2
    printf("TRAPEZIO: %.3lf\n", ((a+b)*c)/2);

// Area Quadrado = b*b
    printf("QUADRADO: %.3lf\n", b*b);

// Area Retangulo = a*b
    printf("RETANGULO: %.3lf\n", a*b);


    return 0;
}
