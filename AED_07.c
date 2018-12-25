/*
 * Autor: Frank Ned Santa Cruz de Oliveira
 * e-mail: ppcafn@gmail.com
 * Data: 181102
 * Funcao: Parte 5 - arrays
 */

 #include <stdio.h>

 int main()
 {
     char nome[50];

     printf("Digite seu nome: ");
     scanf("%[^\n]", &nome);
     printf("O nome digitado foi: %s\n\n", nome);

     return 0;
 }

