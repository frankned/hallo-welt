/*
 * Materia: AED
 * Prof.: Alexandre Zaghetto
 * Aluno: Frank Ned Santa Cruz de Oliveira
 * Matricula: 170167062
 * Exercicio: Extremamente Basico
*/

#include<stdio.h>

int main()
   {
    int dia, diafim, hora, horafim, minuto, minutofim, segundo, segundofim;
    char pt;

    printf("Dia ");
    scanf("%d", &dia);
    scanf("%d %c %d %c  %d", &hora, &pt, &minuto, &pt, &segundo);

    printf("Dia ");
    scanf("%d", &diafim);
    scanf("%d %c %d %c %d", &horafim, &pt, &minutofim, &pt, &segundofim);

    segundo = segundofim - segundo;
    minuto = minutofim - minuto;
    hora = horafim - hora;
    dia = diafim - dia;

 //if (minuto >= 1)
 //  {


    if (segundo < 0)
      {
       segundo += 60;
       minuto--;
      }

    if (minuto < 0)
      {
       minuto += 60;
       hora--;
      }

    if (hora < 0)
      {
       hora += 24;
       dia--;
      }

     printf("\n%d dia(s)\n", dia);
     printf("%d hora(s)\n", hora);
     printf("%d minuto(s)\n", minuto);
     printf("%d segundo(s)\n", segundo);

 //  }

    return 0;
}
