#include <stdio.h>
#include <math.h>
int power(int a, int b);
int main()
{
    int a, b, res;
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);
    res = power(a, b);
    printf("%d", res);
    return 0;
}
int power(int a, int b){
    int res = pow(a, b);
    return res;
}
