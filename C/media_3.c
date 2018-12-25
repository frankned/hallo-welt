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
    float n1, n2, n3, n4, m4, ne, me;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    m4 = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / 10;

    printf("Media: %.1f\n", m4);

    if (m4 >=7.0)
        printf("Aluno aprovado.\n");
    else if (m4 < 5.0)
        printf("Aluno reprovado.\n");
    else if (m4 >= 5.0 && m4 <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &ne);
        printf("Nota do exame: %.1f\n", ne);


        me = (m4 + ne) / 2;

        if (me >= 5.0)
          {
              printf("Aluno aprovado.\n");
              printf("Media final: %.1f\n", me);
          }
        else
          {
              printf("Aluno reprovado.\n");
              printf("Media final: %.1f\n", me);
          }
    }


    return 0;
}
