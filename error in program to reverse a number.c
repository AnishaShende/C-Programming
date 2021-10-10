/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, i,temp;
    printf("Enter a number : ");
    scanf("%d", &a);
    //i=a;
    while(i != 0){
        b=a%10;
        i++;
        b=b/10;
        temp=b;
        
    }
    printf("Reversed number is : %d", temp);
    return 0;
}
