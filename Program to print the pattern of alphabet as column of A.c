/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, i, j;
    printf("Enter a number : ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c",'A'-1+i);
        }
        printf("\n");
    }
    return 0;
}
