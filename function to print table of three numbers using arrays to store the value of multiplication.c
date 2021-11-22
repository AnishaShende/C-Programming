#include <stdio.h>
mult(int *arr, int num, int n){
    printf("\n\nMultiplication table of %d :\n", num);
    for(int i = 0; i < n; i++){
        arr[i] = num * (i+1);
    }
    for(int i = 0; i < n; i++){
        printf("%d x %d = %d\n",num, (i+1), arr[i]);
    }
}
int main()
{
    int arr[3][10];
    int n = 10;
    // int a = arr[0];
    // int b = arr[1];
    // int c = arr[2];
    int a, b, c;
    printf("Enter three numbers : \n");
    // scanf("%d %d %d", &a, &ab, &c);
    scanf("%d %d %d", &a, &b, &c);
    mult(arr[0], a, n);
    mult(arr[1], b, n);
    mult(arr[2], c, n);
    return 0;
}
