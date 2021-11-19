#include<stdio.h>
void change(int *num)
{
    (*num) += 100;
}
void main(){    
int x=100;
printf("Before function call x = %d\n", x);
change(&x);
printf("After function call x = %d \n", x);
}
