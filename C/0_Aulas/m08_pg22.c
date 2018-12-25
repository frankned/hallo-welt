#include <stdio.h>
#include <stdlib.h>

union teste
{
    int i;
    char x;
};


int main()
{
    union teste x;

    x.i = 10;
    printf("%d\n", x.i);

    x.x = 'f';
    printf("%c\n", x.x);

    printf("%d\n", x.i);

    return 0;
}
