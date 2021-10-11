/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    printf ("Enter a number : ");
    scanf ("%d", &a);
    for (int i = 1; i <= 10; i++) {
        printf ("%d x %d = %d\n", a, i, a*i);
    }
    
    return 0;
}
