/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int x, result;
int square (x){
    result = x * x;
    return result;
}
int main()
{
    square(5);
    printf ("square is %d", result);
    return 0;
}
