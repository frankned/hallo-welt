#include <stdio.h>


#define PI 3.1416
#define areaesfera(x) 4*PI*quadrado(x)
#define quadrado(x) x*x

int main()
{
    float raio, area;

    printf("Digite um numero: ");
    scanf("%f", &raio);

    area = areaesfera(raio);

    printf("%.2f\n\n", area);




    return 0;
}
