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
    char op;
    printf ("Enter an operator : ");
    scanf ("%c", &op);
    printf ("Enter two numbers : ");
    scanf ("%d %d", &a, &b);
    if (op == '+') {
        printf ("Answer is %d",a+b);
    }
    else if (op == '-') {
        printf ("Answer is %d",a-b);
    }
    else if (op == '*') {
        printf ("Answer is %d",a*b);
    }
    else if (op == '/') {
        printf ("Answer is %d",a/b);
    }
    else if (op == '%') {
        printf ("Answer is %d",a%b);
    }
    else {
        printf ("Invalid Operator.");
    }
return 0;
}
