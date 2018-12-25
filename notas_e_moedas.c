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
    int c100, c50, c20, c10, c5, c2, m1;

    int m050, m025, m010, m005, m001;

    float n;

    n = c100 = c50 = c20 = c10 = c5 = c2 = m1 = m050 = m025 = m010 = m005 = m001 = 0;

    scanf("%f.2", &n);

//    printf("CENTAVOS: %.2f\n\n",  (double) n/0.01);

 //   if (n >= 0 && n <= 1000000.00)
 //       {


          c100 = (int) n / 100;

          c50 = (int) (n - (c100 * 100)) / 50;

          c20 = (int) (n - ((c100 * 100) + (c50 * 50))) / 20;

          c10 = (int) (n - ((c100 * 100) + (c50 * 50) +(c20 * 20))) / 10;

          c5 = (int) (n - ((c100 * 100) + (c50 * 50) +(c20 * 20) + (c10 * 10))) / 5;

          c2 = (int) (n - ((c100 * 100) + (c50 * 50) +(c20 * 20) + (c10 * 10) + (c5 * 5))) / 2;

          m1 = (int) (n - ((c100 * 100) + (c50 * 50) +(c20 * 20) + (c10 * 10) + (c5 * 5) + (c2 * 2))) / 1;

          m050 = (float) (n - ((c100 * 100) + (c50 * 50) +(c20 * 20) + (c10 * 10) + (c5 * 5) + (c2 * 2) + (m1 * 1))) / 0.50;

          m025 = (float) (n - ((c100 * 100) + (c50 * 50) +(c20 * 20) + (c10 * 10) + (c5 * 5) + (c2 * 2) + (m1 * 1) + (m050 * 0.50))) / 0.25;

          m010 = (float) (n - ((c100 * 100) + (c50 * 50) +(c20 * 20) + (c10 * 10) + (c5 * 5) + (c2 * 2) + (m1 * 1) + (m050 * 0.50) + (m025 * 0.25))) / 0.10;

          m005 = (float) (n - ((c100 * 100) + (c50 * 50) +(c20 * 20) + (c10 * 10) + (c5 * 5) + (c2 * 2) + (m1 * 1) + (m050 * 0.50) + (m025 * 0.25) + (m010 * 0.10))) / 0.05;

          m001 = (float) (n - ((c100 * 100) + (c50 * 50) +(c20 * 20) + (c10 * 10) + (c5 * 5) + (c2 * 2) + (m1 * 1) + (m050 * 0.50) + (m025 * 0.25) + (m010 * 0.10) + (m005 * 0.05))) / 0.01;
   //     }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", c100);
    printf("%d nota(s) de R$ 50.00\n", c50);
    printf("%d nota(s) de R$ 20.00\n", c20);
    printf("%d nota(s) de R$ 10.00\n", c10);
    printf("%d nota(s) de R$ 5.00\n", c5);
    printf("%d nota(s) de R$ 2.00\n", c2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m050);
    printf("%d moeda(s) de R$ 0.25\n", m025);
    printf("%d moeda(s) de R$ 0.10\n", m010);
    printf("%d moeda(s) de R$ 0.05\n", m005);
    printf("%d moeda(s) de R$ 0.01\n", m001);

    return 0;
}
