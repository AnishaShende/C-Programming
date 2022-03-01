#include <stdio.h>

int main()
{
    int i, j, n, a[5], temp;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements of array : \n");
    for(i = 0; i < 5; i ++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n-1; i ++){
        for(j = 0; j < n-i-1; j ++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Sorted array is : \n");
    for(i = 0; i < 5; i ++){
        printf("%d ", a[i]);
    }
    return 0;
}
