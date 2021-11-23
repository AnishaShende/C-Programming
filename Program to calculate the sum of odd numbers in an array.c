/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[5] = {1,3,7,8,6};
    int sum = 0;
    for (int i = 0; i < 5; i++){
        if(a[i] %  2 != 0){
            sum += a[i];
        }
    }
    printf("Sum is : %d", sum);
    return 0;
}
