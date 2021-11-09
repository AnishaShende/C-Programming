/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int temp_to_far(int temp);
int main()
{
    int temp, result;
    printf("Enter a temperature : ");
    scanf("%d", &temp);
    result = temp_to_far(temp);
    printf("It's %d farenheit", result);
    return 0;
}
int temp_to_far(int temp){
    return (1.8 * temp) + 32;
}
