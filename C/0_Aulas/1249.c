#include <stdio.h>

int main()
    {
      char msg;

      while(scanf("%c",&msg) != EOF){
                  if(msg >= 'a' && msg <='z')
                   {
                    if(msg + 13 > 'z')
                       printf("%c",msg - 13);
                    else
                       printf("%c",msg + 13);
                   }
                  else if(msg >= 'A' && msg <='Z')
                   {
                    if(msg + 13 > 'Z')
                       printf("%c",msg - 13);
                    else
                       printf("%c",msg + 13);
                   }
                  else
                    printf("%c",msg);
    }

    return 0;
}
