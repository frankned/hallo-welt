/*
 * Materia: AED
 * Prof.: Alexandre Zaghetto
 * Aluno: Frank Ned Santa Cruz de Oliveira
 * Matricula: 170167062
 * Exercicio: Extremamente Basico
*/

#include <stdio.h>

int main()
{
    char a1[20];
    char a2[20];
    char a3[20];
    int a;

    scanf("%s", a1);
    scanf("%s", a2);
    scanf("%s", a3);

    if (strncmp(a1, "vertebrado", 12) == 0)
        if (strncmp(a2, "ave", 8) == 0)
            if (strncmp(a3, "carnivoro", 9) == 0)
               printf("aguia\n");
            else
                printf("pomba\n");
         else if (strncmp(a3, "onivoro", 9) == 0)
                printf("homem\n");
         else
                printf("vaca\n");
    else
        if (strncmp(a2, "inseto", 8) == 0)
            if (strncmp(a3, "hematofago", 10) == 0)
                printf("pulga\n");
            else
                printf("lagarta\n");
         else if (strncmp(a3, "hematofado", 10) == 0)
                printf("sanguessuga\n");
         else
                printf("minhoca\n");


    return 0;
}
