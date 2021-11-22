#include <stdio.h>
void IntSum(int *arr, int n){
    //int *ptr;
    int sum = 0;
    // arr[0] = *ptr;
    //*ptr = &arr[0];
    for(int i = 0; i < n; i++){
        // if (*(ptr+i) >= 0){
        //     sum += *ptr;
        // }
        // else {
        //     continue;
        // }
        if (arr[i] >= 0){
            sum += arr[i];
        }
        else {
            continue;
        }
        // *ptr++;
    }
    printf("%d", sum);
}
int main()
{
    int arr[] = {0, 1, -1, -3, 6, 3};
    int n = 6;
    printf("Sum is :\n");
    IntSum(arr, n);
    return 0;
}
