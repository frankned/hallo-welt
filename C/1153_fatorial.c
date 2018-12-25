#include<stdio.h>

int main()
{
    int i,n,fat=1;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fat=i*fat;
    printf("%d\n",fat);
    return 0;
}
