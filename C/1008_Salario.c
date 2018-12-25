#include <stdio.h>

int main()
{
    int funci, horas;
    float salario, x;
    scanf("%d %d %f", &funci, &horas, &salario);
    x=horas*salario;
    printf("NUMBER = %d\n", funci);
    printf ("SALARY = U$ %.2f\n",x);
    return 0;
}
