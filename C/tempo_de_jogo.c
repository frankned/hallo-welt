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
    int hi, mi, hf, mf, ht, mt;
    hi = mi = hf = mf = ht = mt = 0;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    mi = mi + (hi * 60);
    mf = mf + (hf * 60);

// if (((hi <= 24 && hf <= 24) || (mi <= 60 && mf <= 60)) && (mi >= 1 || mf <= 1440))
 if (mi >= 1 || mf <= 1440)

   {
    if (mi == mf)
      {
        ht = 24;
        mt = 0;
      }
    else if (mi > mf)
       {
        ht = (mi + mf) / 60;
        mt = (mi + mf) % 60;
       }
    else
       {
        ht = (mf - mi) / 60;
        mt = (mf - mi) % 60;
       }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ht, mt);
   }


    return 0;
}
