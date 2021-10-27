/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, sum = 0;
    for (int i = 1; i <= 15; i++) {
        a = i*i;
        sum += a;
    }
    printf ("Sum is %d", sum);
    return 0;
}
