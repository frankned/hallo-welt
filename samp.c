/* Encontrar o fatorial de 6 */

#include <stdio.h>

int i, j, value;

void main()
{

    printf("Digite um numero: ");

    scanf("%d", &value);

    j = 1;

    for (i = 1; i <= value; i++)
        j = j * i;

    printf("O fatorial de %d eh %d\n\n", value, j);
}
