#include <stdio.h>
#include <stdlib.h>

#define MAX 4

int main()
{
    int i, x[MAX] = {0, 1, 2, 3};

    printf("Endereco\t   Conteudo\t\n");
    printf("Notacao de PONTEIRO:\n");

    for(i = 0; i < MAX; i++)
        printf("%d\t\t   %d\t\n", x+i, *(x+i));

    return 0;
}
