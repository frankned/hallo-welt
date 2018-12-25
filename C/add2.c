#include <stdio.h>

int main(
    {
        int a, b, c;

        a = b = c = 0;

        printf("Informe o primeito numero: ");
        scanf("%d", &a);

        printf("Informe o segundo numero: ");
        scanf("%d", &b);

        printf("Informe o terceiro valor: ");
        scanf("%d", &c);

        printf("A soma de %d + %d + %d = %d\n\n", a, b, c, a+b+c);

    }
