/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i = 0, a;
    printf ("Enter a Number upto which you want to print square : ");
    scanf ("%d", &a);
    while (i = a) {
        printf ("Square of %d is %d\n",i,i*i);
       // printf ("* \n");
        i++;
    }
    return 0;
}
