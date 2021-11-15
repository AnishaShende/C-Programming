#include <stdio.h>

int main()
{
    int arr[10];
    for (int i = 1; i <= 10; i++){
        arr[i] = i * 5;
    }
    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", 5, i, arr[i]);
    }
    return 0;
}
