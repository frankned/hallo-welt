#include <stdio.h>
#include <stdlib.h>
int main(){
int x1 = -2147483648;
char x2 = 'A';
float x3 = 3.141592;
double x4 = 3.141592653589793;
unsigned int x5 = 4294967295;
unsigned char x6 = 255;
short int x7 = 32767;
unsigned short int x8 = 65535;
printf("x1: %d \n", x1); // int
printf("x2: %c \n", x2); // char
printf("x3: %f \n", x3); // float
printf("x4: %.15lf \n", x4); // double
printf("x5: %u \n", x5); // unsigned int
printf("x6: %u \n", x6); // unsigned char
printf("x7: %u \n", x7); // short int
printf("x8: %hu \n", x8); // unsigned short int
return 0;
}
