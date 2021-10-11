/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &a);
    while (a != 0) {
        b=a%10;
        a/=10;
        sum+=b;
    }
    printf ("Sum is %d.", sum);
    return 0;
}
