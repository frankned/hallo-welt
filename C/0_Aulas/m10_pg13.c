#include <stdio.h>
#include <stdlib.h>


int main()
{
    double *p1, x = 1.23212345;

    p1 = &x;

    printf("p1: %d\n", p1);
    printf("&x: %d\n", &x);
    printf("x: %lf\n", x);

    p1++;

    printf("p1: %d\n", p1);
    printf("&x: %d\n", &x);
    printf("x: %lf\n", x);



    return 0;
}
