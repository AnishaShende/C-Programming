/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b = 0;
    do {
        printf("Enter a number :");
        scanf ("%d", &a);
        b += a;
    } while (a != 0);
    printf ("Sum = %d", b);
    return 0;
}
