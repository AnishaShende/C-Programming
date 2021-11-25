#include<stdio.h>
int main()
{
    int i,j,k,l,m;
    for(i=0;i<=3;i++)
    {
        for(k=65;k<=68-i;k++)
            printf("%c",k);
        for(j=1;j<=i*2-1;j++)
            printf(" ");
        for(l=68-i;l>=65;l--)
            if(l!=68)
                printf("%c",l);
        printf("\n");
    }
    return 0;
}
