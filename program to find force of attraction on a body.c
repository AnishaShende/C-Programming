/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float force(float mass);
int main()
{
    float a;
    printf("Enter the value for mass in kgs : ");
    scanf("%f", &a);
    printf("The Value of force in newton is : %.2f", force(a));
    return 0;
}
float force(float mass){
    float result;
    result = mass * 9.8;
    return result;
}
