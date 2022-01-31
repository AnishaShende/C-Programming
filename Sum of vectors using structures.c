#include <stdio.h>

struct vector{
    int x;
    int y;
};
struct vector sum_vector(struct vector x1, struct vector y1){
    struct vector result;
    result.x = x1.x + y1.x;
    result.y = x1.y + y1.y;
    return result;
}
int main()
{
    struct vector x1, y1, result;
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
    result = sum_vector(x1, y1);
    printf("Dimensions of x is %d and y is %d.\n", result.x, result.y);
    return 0;
}
