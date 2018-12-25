#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados_aluno
{
  char nome[80];
  float media;
};


int imp_struct(struct dados_aluno *);

int alt_struct(struct dados_aluno *);


int main()
{
    struct dados_aluno aluno, *p_aluno;

    p_aluno = &aluno;

    strcpy((*p_aluno).nome,"Frank Ned");
    p_aluno->media = 9.5;

//    printf("%s\n", p_aluno->nome);
//    printf("%f\n",(*p_aluno).media);

    imp_struct(p_aluno);

    alt_struct(p_aluno);

    imp_struct(p_aluno);


    return 0;
}


int imp_struct(struct dados_aluno *parm)
{
    printf("%s \n", parm->nome);
    printf("%f \n", parm->media);

    return 0;
}

int alt_struct(struct dados_aluno *parm)
{
    strcpy(parm->nome, "Santa Cruz");
    parm->media = 9.0;

    return 0;
}

