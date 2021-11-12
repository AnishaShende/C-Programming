/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    long int i, *j, **k;
    i = 5;
    j = &i;
    k = &j;
    printf("The value of i is %u", **k);
    //Here printf("The value of i is %u", ***&k); <-- will also give the same value
    return 0;
}
