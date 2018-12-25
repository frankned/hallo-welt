#include <stdio.h>

#define quadrado(x) x*x

int main()
{
    float numero, numeroquad;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    numeroquad = quadrado(numero);

    printf("%.2f - %.2f\n\n", numero, numeroquad);




    return 0;
}
