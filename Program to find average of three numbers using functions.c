/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
float avg(int a, int b, int c);
int main()
{
    int a, b, c, result;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    result = avg(a, b, c);
    printf("Average of three numbers are : %f", result);
    return 0;
}
float avg(int a, int b, int c){
    return (a + b + c)/3;
}
