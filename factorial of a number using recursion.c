/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int fact(int a);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Factorial of %d is %d", a, fact(a));
    return 0;
}
int fact(int a){
    if (a == 1 || a == 0){
        return 1;
    }
    else {
        return a * fact(a-1);
    }
}
