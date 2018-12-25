/*
 * Autor: Frank Ned Santa Cruz de Oliveira
 * e-mail: ppcafn@gmail.com
 * Data: 181102
 * Funcao: switch
 */

#include <stdio.h>

int main()
{
    int                 x1 = -2147483648;
    char                x2 = 'A';
    float               x3 = 3.141592;
    double              x4 = 3.141592653589793;
    unsigned int        x5 = 4294967295;
    unsigned char       x6 = 255;
    short int           x7 = 32767;
    unsigned short int  x8 = 65535;

    printf("x1 : %d\n", x1);
    printf("x2 : %x\n", x2);
    printf("x3 : %f\n", x3);
    printf("x4 : %lf\n", x4);
    printf("x5 : %u\n", x5);
    printf("x6 : %u\n", x6);
    printf("x7 : %hi\n", x7);
    printf("x8 : %hu\n", x8);

    return 0;
}
