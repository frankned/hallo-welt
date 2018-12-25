#include <stdio.h>

int main()
{
    float notas[7], medias;
    int i;

    for(i = 0; i <= 6; i++)
    {
        printf("Informe a nota: ");
        scanf("%f", &notas[i]);
        medias += notas[i];
    }

    for(i = 0; i <= 6; i++)
        printf("Nota %d = %f\n", i, notas[i]);

    printf("Media: %f", medias/7);

    return 0;
}
