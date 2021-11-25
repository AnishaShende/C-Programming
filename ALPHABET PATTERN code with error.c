#include <stdio.h>
int main()
{
    int a,b;
    char CH='E';
    int spaces=1;
    for(a=1; a<=5; a++)
    {
        for(b='A'; b<=CH; b++)
            printf("%c",b);
        if(a==1)
            printf("\b");
        for(b=1; b<spaces; b++)
            printf(" ");
        for(b=CH; b>='A'; b--)
            printf("%c",b);
        printf("\n");
        CH--;
        spaces++;
    }
    return 0;
}
