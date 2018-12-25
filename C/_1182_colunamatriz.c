//1182 - Coluna na Matriz

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double M[12][12], calc = 0;
	int linha, coluna, c = 0;
	char oper;

	scanf("%i", &c); //coluna

	scanf("%c", &oper);
	oper = getchar(); //S ou M soma ou media

	for(linha = 0; linha < 12; linha++)
		for(coluna = 0; coluna < 12; coluna++) //leitura de todos os elemntos
			scanf("%lf", &M[linha][coluna]);

	for(linha = 0; linha < 12;linha++)
    		calc = calc + M[linha][c]; // acumular os valores da coluna

	if (oper == 'M')
	{
    	calc = calc / 12; // faz a media dentre os valores da coluna
    	printf("%.1lf\n", calc);
	}
    if (oper == 'S')
    {
    	printf("%.1lf\n", calc);
    }

	return 0;
}
