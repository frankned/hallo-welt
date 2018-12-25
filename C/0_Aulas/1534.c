#include <stdio.h>

int main()
{
    int n, i;


    scanf("%d", &n);

    int m[n];

    if (n >= 3 && n <= 70)
    {


        for(i = 0; i < n; i++)
        {
            if(i = 0)
            {
                m[i] = 1;
            }
            else if(i == n-1)
            {
                m[i] = 2;
            }
            else
                m[i] = 3;
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d\n", m[i]);
    }


    return 0;
}
