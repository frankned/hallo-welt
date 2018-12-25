#include <stdio.h>



int main()
{
    float x, *p;

    x = 1.23212345;
    p = &x;

    printf("p: %d\n", p);
    printf("&x: %d\n", &x);
    printf("x %lf\n", x);

    p++;
    printf("p: %d\n", p);
    printf("&x: %d\n", &x);
    printf("x %lf\n", x);

    *p++;
    printf("p: %d\n", p);
    printf("&x: %d\n", &x);
    printf("x %lf\n", x);








    return 0;
}
