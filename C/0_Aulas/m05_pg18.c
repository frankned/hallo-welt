#include <stdio.h>

int main()
{
    int i, quant;

    printf("Qtd notas a entrar: ");
    scanf("%d", &quant);

    float notas[quant];

    for(i = 0; i < quant; i++)
    {
        printf("Informe a nota: ");
        scanf("%f", &notas[i]);
    }

    for(i = 0; i < quant; i++)
        printf("Nota %d = %f\n", i, notas[i]);

    return 0;
}
