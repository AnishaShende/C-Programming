/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, y;
    printf("Enter the value for x and n : ");
    scanf("%lf %lf", &a, &b);
    y = pow (a, b);
    printf ("The value of y in the expression y = x^n is %.2lf", y);
    return 0;
}
