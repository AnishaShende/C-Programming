#include <stdio.h>

struct vector{
    int x;
    int y;
};
int main()
{
    struct vector x1, y1;
    printf("Enter the dimensions of x vector.\n");
    printf("x axis : ");
    scanf("%d", &x1.x);
    printf("y axis : ");
    scanf("%d", &x1.y);
    printf("Enter the dimensions of y vector.\n");
    printf("x axis : ");
    scanf("%d", &y1.x);
    printf("y axis : ");
    scanf("%d", &y1.y);
    // x1.x = 50;
    // x1.y = 200;
    // y1.x = 500;
    // y1.y = 100;
    printf("Dimensions of x vector is %d and %d.\n", x1.x, x1.y);
    printf("Dimensions of y vector is %d and %d.\n", y1.x, y1.y);
    return 0;
}
