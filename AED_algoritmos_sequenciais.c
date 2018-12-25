/*
 * Autor: Frank Ned Santa Cruz de Oliveira
 * e-mail: ppcafn@gmail.com
 * Data: 181102
 * Funcao: Parte 5 - arrays
 */

 #include <stdio.h>

 int main()
 {
     float n1, n2, m;

     printf("Digite um numero: ");
     scanf("%f", &n1);

     printf("Digite outro numero: ");
     scanf("%f", &n2);

     m = (n1+n2)/2;

     printf("A media entre %f e %f eh %f\n\n", n1, n2, m);

     return 0;
 }
