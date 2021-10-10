/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, sum;
    sum = 0;
    do {
        printf ("Enter a number : ");
        scanf ("%d", &num);
        sum = sum + num;
    } while (num != 0);
    printf ("sum = %d", sum);
    return 0;
}
