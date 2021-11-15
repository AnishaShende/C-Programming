#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr = &arr[10];
    for (int i = 0; i < 10; i++){
        printf("Enter the value for position %d : \n", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Reverse array is \n");
    for (int i = 0; i < 10; i++){
        ptr --;
        printf("Value at position %d is %d\n", i+1, *ptr);
        //printf("%d ", *ptr);
    }
    return 0;
}
