/*
    Escreva uma FUN��O que recebe POR REFER�NCIA um vetor contendo os coeficientes C0, C1, ..., Cn
    POR VALOR o grau "n" do polin�mio, os valore "a" e "b" que definem o intervalo [a,b] e o
    n�mero "m" de subintervalos, retornar via RETURN o valor aproximado da integral de p(x) no
    intervalo [a,b] utilizando o m�todo do trap�zio.

    p(x) = Cn * x^n +
           Cn-1 * X^n-1 +
           ... +
           C1 * x +
           C0
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculaIntegral(double *, int, double, double, int);

double calculaIntegral(double *vetor, int grau, double a, double b, int m) {
    /* Declara��o de vari�veis */
    double f_x0, f_x1, area, h, x, result = 0;
    int cont;

    /* Testa a integridade do n�mero de intervalos (m) */
    if (m==0) {
        printf("Divis�o por zero!\n");
        exit(1);
    } else if (m < 0) {
        printf("Intervalo inv�lido!\n");
        exit(1);
    }

    h = (b - a) / m; /* Define o espa�o entre os pontos de "a" a "b" */

    /* Calcula a integral no intervalo de "a" a "b".
       O primeiro valor do la�o � "a" e incrementa de "h" em "h" at� b-h.
       Para cada itera��o, calcula f(x) e f(x+h) para poder obter a �rea do trap�zio.
     */
    for (x=a; x <= (b-h); x+=h)
    {

        /* Calcula o valor do primeiro ponto */
        f_x0 = 0;
        for (cont=0; cont<=grau; cont++)
            f_x0 = f_x0 + vetor[cont]*pow(x,grau-cont);

        /* Calcula o valor do segundo ponto */
        f_x1 = 0;
        for (cont=0; cont<=grau; cont++)
            f_x1 = f_x1 + vetor[cont]*pow((x + h),grau-cont);

        /* Calcula a �rea do trap�zio formado entre o primeiro e o segundo ponto */
        area = ((f_x0 + f_x1) * h) / 2;

        /* Incrementa o valor encontrado no resultado */
        result += area;
    };

    return result;
}

int main() {

    double vetor[5] = {2.3, 4, 3, 2, 1}; /* Coeficientes do polin�mio. � o grau do polin�mio mais um, porque tem o x elevado a zero */
    int grau = 4;                        /* Grau do polin�mio */
    double a = 1;                        /* Valor inicial do intervalo */
    double b = 3;                        /* Valor final do intervalo */
    int m = 1000;                        /* N�mero de pontos intermedi�rios desejados. Qto maior, mais preciso o c�lculo. */

    printf("Integral no intervalo de %f a %f = %f\n", a, b, calculaIntegral(vetor, grau, a, b, m));

    /* Para testar o resultado do programa, acessar https://www.integral-calculator.com */

    return 0;
}
