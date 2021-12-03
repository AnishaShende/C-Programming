/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 11};
    int arr[10];
    for (int i = 0; i < 5; i++){
        arr[i] = arr1[i];
    }
    // for (int i = 0; i < 5; i++){
    //     printf("%d ", arr[i]);
    // }
    
    for (int i = 0; i < 5; i++){
        arr[i+5] = arr2[i];
    }
    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
