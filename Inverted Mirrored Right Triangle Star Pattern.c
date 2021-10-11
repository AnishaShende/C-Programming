#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a number : ");
    scanf("%d", &b);
    a = b;
    for (int i = 0; i <= b; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = a; k >= 1; k--) {
            printf("*");
        }
        a--;
        printf("\n");
    }
    return 0;
}
