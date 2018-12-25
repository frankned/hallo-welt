/*
    Escreva uma fun��o quicksort, utilizando a fun��o partition.
*/

#include <stdio.h>
#include <stdlib.h>

/* Fun��o dada pela quest�o */
int partition(int *v, int inicio, int fim) {
    int x, i, j, t, pivo;

    pivo = v[(int)(inicio+fim)/2];

    i = inicio - 1;
    j = fim + 1;

    while (1) {
        do { j--; } while(v[j]>pivo);
        do { i++; } while(v[i]<pivo);
        if (i<j) {
            t = v[i];
            v[i] = v[j];
            v[j] = t;
            i++;
            j--;
        } else
            return j;
    }
}

/* RESPOSTA DO ITEM "A" DA QUEST�O */
void quick_sort(int *vetor, int inf, int sup) {

    int cont;

    if (inf < sup) {
        partition(vetor, inf, sup);

        /* Exibi��o do vetor ap�s a execu��o da fun��o partition. N�o precisa colocar na resposta da prova. */
        printf("inicio %2d fim %2d ", inf, sup);
        for (cont=0; cont<12; cont++) printf("%2d ", vetor[cont]);
        printf("\n");
        /* Fim do bloco de exibi��o do vetor. */

        quick_sort(vetor, inf,     sup - 1);
        quick_sort(vetor, inf + 1, sup);
    }
}

int main() {

    int vetor[12] = {14,17,72,87,45,22,11,55,20,91,7,75};

    /* RESPOSTA DO ITEM "B" DA QUEST�O: qual ser� a organiza��o do vetor ap�s a primeira execu��o da fun��o partition
       14,17,7,20,11,22,45,55,87,91,72,75
    */

    quick_sort(vetor, 0, 11);

    return 0;
}
