#include <stdio.h>

int main()
{
    int num;
    printf("Odd numbers between 1 and 100 are as follows :\n");
    for (int i = 1; i <= 100; i++){
        if (i % 2 == !0){
            printf("%d ", i);
        }
    }
    return 0;
}
