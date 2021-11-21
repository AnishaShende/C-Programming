#include <stdio.h>
void reverse(int *arr, int n){
    int temp;
    for (int i = 0; i <= n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < 7; i++){
        printf("Value at %d is %d\n",i, arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 4, 5, 8, 3, 7};
    printf("Before reversing the array : \n");
    for(int i = 0; i < 7; i++){
        printf("Value at %d is %d\n",i, arr[i]);
    }
    printf("After reversing the array : \n");
    reverse(&arr, 7);
    return 0;
}
