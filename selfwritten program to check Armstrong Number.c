/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, orinum, remain, result = 0;
    printf ("Enter a three digit number : ");
    scanf ("%d", &num);
    orinum = num;
    while (num != 0) {
        remain = num % 10;
        result += remain*remain*remain;
        num /= 10;
    }
    if (result == orinum) {
        printf ("%d is an Armstrong number. ", orinum);
    } else {
        printf ("%d is not an Armstrong number. ", orinum);
    }
    return 0;
}