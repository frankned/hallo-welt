#include <stdio.h>

int main()
{
    double a, b, c, x, tri, circ, trap, quad, retan;
    scanf("%lf %lf %lf", &a, &b, &c);
    double pi = 3.14159;
    tri=a*c/2;
    circ=pi*c*c;
    x=a+b;
    trap=x*c/2;
    quad=b*b;
    retan=a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", tri, circ, trap, quad, retan);
    return 0;
}
