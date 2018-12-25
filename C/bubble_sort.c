#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void bubble_sort(int *, int);

int main()
{

    int vet[MAX] = {7, 4, 1, 8, 2, 9, 3, 5, 0, 6};
//    char vet[MAX] = {'f', 'b', 'c', 'a', 'e', 'd', 'j', 'h', 'g', 'i'};

    int i;

    for(i = 0; i < MAX; i++)
    {
        printf("vet[%d] = %d\n", i, vet[i]);
    }

    bubble_sort(vet, MAX);

    printf("\n\n");

    for(i = 0; i < MAX; i++)
    {
        printf("vet[%d] = %d\n", i, vet[i]);
    }

    return 0;
}


void bubble_sort(int *v, int n)
{
    int i, j, aux;

    for(i = n - 1; i > 0; i--)
    {
        printf("\n[%d] ", i);

        for (j = 0; j < i; j++)
        {
            printf("%d, ", j);

            if (v[j] > v[j + 1])
            {
                aux      = v[j];
                v[j]     = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}
