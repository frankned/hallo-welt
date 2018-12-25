/*
 * Materia: AED
 * Prof.: Alexandre Zaghetto
 * Aluno: Frank Ned Santa Cruz de Oliveira
 * Matricula: 170167062
 * Exercicio: Extremamente Basico
*/

#include <stdio.h>

int hi, mi, hf, mf, th, tm;

int main()
 {
	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

	th = hf - hi;

	if (th < 0)
		th = 24 + (hf - hi);

	tm = mf - mi;

	if (tm < 0)
		tm = 60 + (mf - mi);


	if (hf == hi && mf == mi)
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	else
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", th, tm);
}
