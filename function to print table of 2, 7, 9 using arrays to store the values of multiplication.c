#include <stdio.h>
mult(int *mulTable, int num, int n){
    printf("Table of %d is as follows : \n", num);
    for(int i = 0; i < n; i++){
        mulTable[i] = num * (i+1);
    }
    for(int i = 0; i < n; i++){
        printf("%d x %d = %d\n", num, i+1, mulTable[i]);
    }
}
int main()
{
    int arr[3][10];
    // mult[0][2][10];
    // mult[1][7][10];
    // mult[2][9][10];
    mult(arr[0], 2, 10);
    mult(arr[1], 7, 10);
    mult(arr[2], 9, 10);
    return 0;
}
