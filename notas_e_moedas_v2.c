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
	int qtde100, qtde50, qtde20, qtde10, qtde5, qtde2, qtde1, qtde050, qtde025, qtde010, qtde005, qtde001, reais, centavos;
	float valor = 0;

	scanf ("%f", &valor);

	reais = (int) (valor);
	centavos = ((valor - reais) * 100);

	qtde100 = reais / 100;
	reais = reais % 100;

	qtde50 = reais / 50;
	reais = reais % 50;

	qtde20 = reais / 20;
	reais = reais % 20;

	qtde10 = reais / 10;
	reais = reais % 10;

	qtde5 = reais / 5;
	reais = reais % 5;

	qtde1 = reais / 1;
	reais = reais % 1;

	qtde050 = centavos / 50;
	centavos = centavos % 50;

	qtde025 = centavos / 25;
	centavos = centavos % 25;

	qtde010 = centavos / 10;
	centavos = centavos % 10;

	qtde005 = centavos / 5;
	centavos = centavos % 5;

	qtde001 = centavos / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", qtde100);
    printf("%d nota(s) de R$ 50.00\n", qtde50);
    printf("%d nota(s) de R$ 20.00\n", qtde20);
    printf("%d nota(s) de R$ 10.00\n", qtde10);
    printf("%d nota(s) de R$ 5.00\n", qtde5);
    printf("%d nota(s) de R$ 2.00\n", qtde2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", qtde1);
    printf("%d moeda(s) de R$ 0.50\n", qtde050);
    printf("%d moeda(s) de R$ 0.25\n", qtde025);
    printf("%d moeda(s) de R$ 0.10\n", qtde010);
    printf("%d moeda(s) de R$ 0.05\n", qtde005);
    printf("%d moeda(s) de R$ 0.01\n", qtde001);

    return 0;
}
