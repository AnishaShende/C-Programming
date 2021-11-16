#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int *ptr;
    int *ptr2;
    int temp;
    int arr[n];
    printf("Enter the size of array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter a number for an array : ");
        scanf("%d", &arr[n]);
    }
    for (int i = 0; i <= n; i++) {
        *ptr = arr[0];
        *ptr2 = *ptr + 1;
        temp = *ptr + *ptr2;
        printf("%d", arr[n]);
    }
    return 0;
}
