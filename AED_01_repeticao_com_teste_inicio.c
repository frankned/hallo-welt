/*
 * Autor: Frank Ned Santa Cruz de Oliveira
 * e-mail: ppcafn@gmail.com
 * Data: 181102
 * Funcao: switch
 */

#include <stdio.h>

int main()
{

    float nota, soma;
    int op, count;

    op = 1;
    count = 0;
    soma = 0;
    nota = 0;

    while (nota != -1)
    {
        printf("Informe uma nota: ");
        scanf("%f", &nota);

        if (nota != -1)
        {
            soma = soma + nota;
            count++;
        }
    }

    if (nota = -1 && soma != 0)
      {
        printf("A media da turma eh %f\n\n", soma / count);
      }
    else
      {
        printf("Nao foi informado nota alguma\n\n");
      }


    return 0;
}
