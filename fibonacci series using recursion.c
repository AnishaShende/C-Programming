#include <stdio.h>
int fibonacci(int fib);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Number at position %d in fibonacci series is %d", a, fibonacci(a));
    return 0;
}
int fibonacci(int fib){
    
    if (fib == 0){
        return 0;
    }
    else if (fib == 1){
        return 1;
    }
    else {
        return fibonacci(fib-1) + fibonacci(fib-2);
    }
}
