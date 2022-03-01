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
    for(i = 0; i < n; i ++){
        for(j = i + 1; j < n; j ++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array is : \n");
    for(i = 0; i < 5; i ++){
        printf("%d ", a[i]);
    }
    return 0;
}
