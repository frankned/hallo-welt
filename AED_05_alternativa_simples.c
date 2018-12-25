/*
 * Autor: Frank Ned Santa Cruz de Oliveira
 * e-mail: ppcafn@gmail.com
 * Data: 181102
 * Funcao: Calculo da area do circulo (A = pi.r^2)
 */

#include <stdio.h>
#include <math.h>

 int main()
 {
     float r, a;
     float pi = 3.14;

     printf("Informe o raio do circulo: ");
     scanf("%f", &r);

     if (r > 0)
     {
         a = pi * pow(r,2);
         printf("A area do circulo eh: %f\n\n", a);
     }
     else
     {
         printf("Valor informado invalido - eh negativo: %f\n\n", r);
     }

     return 0;
 }
