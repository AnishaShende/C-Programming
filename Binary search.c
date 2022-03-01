#include <stdio.h>

int main()
{
    int low = 0, n, pos = -1, i, val, high, mid, a[15];
    printf("Enter the number of elements in array : \n");
    scanf("%d", &n);
    printf("Enter the elements of array : \n");
    for(i = 0; i < n; i ++){
        scanf("%d", &a[i]);
    }
    printf("Enter the value to be search : ");
    scanf("%d", &val);
    high = n - 1;
    while(low <= high){
        mid = (low + high)/2;
        if(a[mid] == val){
            pos = mid;
            printf("Element is present at index %d.\n", pos);
            break;
        }
        else if(a[mid] > val){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    if(pos == -1){
        printf("Number not present.\n");
    }
    return 0;
}
