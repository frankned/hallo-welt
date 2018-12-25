#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void Xover(char *, char *);


int main()
{
    char s1[100], s2[100];

    printf("Informe a primeira string: ");
    gets(s1);

    printf("Informe a segunda string: ");
    gets(s2);

    Xover(s1, s2);

    puts(s1);
    puts(s2);


    return 0;
}


void Xover(char *s1x, char *s2x)
{
    int i, pivo;
    char aux;

    srand(time(NULL));

    if(strlen(s1x) >= strlen(s2x))
    {
        pivo = rand() % strlen(s1x) - 1;
    }
    else
    {
        pivo = rand() % strlen(s2x) - 1;
    }

    printf("Pivo: %d\n", pivo);

    for(i = 0; i < pivo; i++)
    {
        aux = s1x[i];
        s1x[i] = s2x[i];
        s2x[i] = aux;
    }
}
