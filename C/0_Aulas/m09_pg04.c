#include <stdio.h>

float potencia(float, int);

float potencia(float x, int n)
{
    float pot = 1;
    int i;

    for(i = 0; i < n; i++)
        pot = pot * x;

    return pot;
}

int main()
{
    float resultado;

    resultado = potencia(5, 2);
    printf("%f", resultado);


    return 0;
}
