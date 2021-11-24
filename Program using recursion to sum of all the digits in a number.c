#include <stdio.h>
int sum_digits(int num){
    if(num == 0){
        return 0;
    }
    else {
        return (num % 10 + sum_digits(num / 10));
    }
}
int main()
{
    int num, sum;
    printf("Enter a number : ");
    scanf("%d", &num);
    sum = sum_digits(num);
    printf("Sum of digits is %d.", sum);
    return 0;
}
