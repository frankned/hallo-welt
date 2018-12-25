/*
    Escreva uma função quicksort, utilizando a função partition.
*/

#include <stdio.h>
#include <stdlib.h>

/* Função dada pela questão */
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

/* RESPOSTA DO ITEM "A" DA QUESTÃO */
void quick_sort(int *vetor, int inf, int sup) {

    int cont;

    if (inf < sup) {
        partition(vetor, inf, sup);

        /* Exibição do vetor após a execução da função partition. Não precisa colocar na resposta da prova. */
        printf("inicio %2d fim %2d ", inf, sup);
        for (cont=0; cont<12; cont++) printf("%2d ", vetor[cont]);
        printf("\n");
        /* Fim do bloco de exibição do vetor. */

        quick_sort(vetor, inf,     sup - 1);
        quick_sort(vetor, inf + 1, sup);
    }
}

int main() {

    int vetor[12] = {14,17,72,87,45,22,11,55,20,91,7,75};

    /* RESPOSTA DO ITEM "B" DA QUESTÃO: qual será a organização do vetor após a primeira execução da função partition
       14,17,7,20,11,22,45,55,87,91,72,75
    */

    quick_sort(vetor, 0, 11);

    return 0;
}
