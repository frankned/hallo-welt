#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados_aluno
{
  char nome[80];
  float media;
};


int imp_struct(struct dados_aluno);

int main()
{
    struct dados_aluno aluno;

    strcpy(aluno.nome,"Frank Ned");
    aluno.media = 9.5;

    imp_struct(aluno);


    return 0;
}

int imp_struct(struct dados_aluno parm)
{
    printf("%s \n", parm.nome);
    printf("%f \n", parm.media);

    return 0;
}
