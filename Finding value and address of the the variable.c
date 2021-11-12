/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, *j;
    i = 5;
    j = &i;
    printf("The value of the i variable is %d\n", i);
    printf("The address of the i variable is %u", j);
    return 0;
}
