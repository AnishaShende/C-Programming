#include <stdio.h>

int main()
{
    //int *ptr;
    int arr[10];
    int *ptr = arr;
    *ptr = ptr + 2;
    if (ptr == &arr[2]){
        printf("It is pointing towards second element of an array.");
    }
    else {
        printf("It is not pointing towards second element of an array.");
    }
    // printf("After change value is %u", *ptr);
    // for (int i = 0; i < 10; i++){
    //     printf("Enter value for array at %d position : \n", i);
    //     scanf("%d", &arr[i]);
    // }
    // for (int i = 0; i < 10; i++){
    //     printf("Value for array at %d position is  %d\n", i, arr[i]);
    // }
    return 0;
}
