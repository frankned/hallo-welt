#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 3

int rtval(float *, int);

int main()
{
    int m[LIN][COL], *p;
    int i, j;

    for(i = 0; i < LIN; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("Elemento %d %d = ", i, j);
            scanf("%d", &m[i][j]);
        }
     }




//NOTACAO DE MATRIZ

    p = &m[0][0];

    for(i = 0; i < LIN; i++)
    {
        for(j = 0; j < COL; j++)
        {
//            printf("%d\t\t   %d\t\n", &m[i][j], m[i][j]);
            printf("%d\t\t   %d\t\n", p+i*COL+j, *(p+i*COL+j));
        }
     }


    return 0;
}

