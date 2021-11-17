#include <stdio.h>
int sum_of_num(int num);
int main()
{
    int num, res;
    printf("Enter a number for sum : ");
    scanf("%d", &num);
    res = sum_of_num(num);
    printf("Sum of number upto %d is %d.", num, res);
    return 0;
}
int sum_of_num(int num){
    int sum;
    if (num == 0){
        return 0;
    }
    else if (num == 1){
        return 1;
    }
    else{
        return sum = num + sum_of_num(num - 1);
    }
}
