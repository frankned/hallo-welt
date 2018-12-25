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
    int di, hi, mi, si, df, hf, mf, sf, dt, ht, mt, st, tti, ttf, ttd, tth, ttm, tts;
    di = hi = mi = si = df = hf = mf = sf = dt = ht = mt = st = tti = ttf = ttd = tth = ttm = tts = 0;
    char pt;

    printf("Dia ");
    scanf("%d", &di);
    scanf("%d %c %d %c %d", &hi, &pt, &mi, &pt, &si);

    printf("Dia ");
    scanf("%d", &df);
    scanf("%d %c %d %c %d", &hf, &pt, &mf, &pt, &sf);


    mi = mi + (hi * 60);
    tti = (((di * 24) * 60) * 60);
    tti += (mi * 60) + si;

    mf = mf + (hf * 60);
    ttf = (((df * 24) * 60) * 60);
    ttf += (mf * 60) + sf;

    if (tti > ttf)
        ttf = tti - ttf;
    else
        ttf = ttf - tti;

    ttd = ttf / 86400;
    tts = ttf % 86400;

    tth = tts / 3600;

    ttm = (tts % 3600) / 60;
    tts = tts % 60;

    printf("%d dia(s)\n", ttd);
    printf("%d hora(s)\n", tth);
    printf("%d minuto(s)\n", ttm);
    printf("%d segundo(s)\n", tts);

    return 0;
}
