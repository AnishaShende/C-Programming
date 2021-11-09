#include <stdio.h>
int nat(int num);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Sum of %d natural numbers are %d", a, nat(a));
    return 0;
}
int nat(int num){
    
    if (num == 0){
        return 0;
    }
    // else if (fib == 1){
    //     return 1;
    // }
    else {
        return (nat(num-1) + num);
    }
}
