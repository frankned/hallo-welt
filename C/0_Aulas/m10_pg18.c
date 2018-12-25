#include <stdio.h>
#include <stdlib.h>

int rtval(float *, int *);

int main()
{
    float y = 5.0;
    int x = 5, sucesso;

    printf("y = %.2f - x = %d\n", y, x);

    sucesso = rtval(&y, &x);

    printf("y = %.2f - x = %d\n", y, x);
    printf("Sucesso = %d\n", sucesso);

    return 0;
}

int rtval(float *n1, int *n2)
{
    *n1 = *n1/2;

    *n2 = *n2%2;

    return 0;
}
