/*
 * Materia: AED
 * Prof.: Alexandre Zaghetto
 * Aluno: Frank Ned Santa Cruz de Oliveira
 * Matricula: 170167062
 * Exercicio: Extremamente Basico
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, r1, r2, dv, rz;
    a = b = c = 0;

    scanf("%lf %lf %lf", &a, &b, &c);

    rz = pow(b,2) - 4*a*c;
    dv = 2*a;

 //   r1 = ((-1*b + sqrt(rz)) / dv);
 //   r2 = ((-1*b - sqrt(rz)) / dv);

    if (dv == 0 || rz < 0)
        printf("Impossivel calcular\n");
    else
    {
     printf("R1 = %.5lf\n", (-1*b + sqrt(rz)) / dv);
     printf("R2 = %.5lf\n", (-1*b - sqrt(rz)) / dv);

    }





    return 0;
}
