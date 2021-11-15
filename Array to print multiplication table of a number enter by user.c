/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[10];
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++){
        arr[i] = i * n;
    }
    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, arr[i]);
    }
    return 0;
}
