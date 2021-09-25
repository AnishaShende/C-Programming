/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    printf ("Enter a number : ");
    scanf ("%d", &a);
    b = pow(a,3);
    printf ("Cube of %d is %d.", a, b);
    
return 0;
}
