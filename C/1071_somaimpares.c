#include <stdio.h>
int main()
{
    int i,a,b,s=0;
    scanf("%d %d", &a, &b);
    if (a > b){
        a = a + b;
        b = a - b;
        a = a - b;
    }
    if (a%2==0)a--;
    a = a + 2;
    for (i = a;i < b;i=i+2){
            s = s + i;
    }
    printf("%d\n",s);
    return 0;
}
