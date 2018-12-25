#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
int *p, x;
x = 15;
p = &x;
printf("%d \n", p);
printf("%d \n", *p);
return 0;
}
