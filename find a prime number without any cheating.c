/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, flag = 0;
    printf ("Enter a number : ");
    scanf ("%d", &num);
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 1;
        }
    }
    if (num == 1 || num == 0) {
        printf ("%d is neither prime nor composite.", num);
    }
    else {
        if (flag == 0)
        printf ("It's a prime number.");
        else 
        printf ("It's not a prime number.");
    }
    return 0;
}
