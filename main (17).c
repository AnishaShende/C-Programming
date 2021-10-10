#include <stdio.h>

int main()
{
    int a,sum=0;
    for (int a = 100; a<=200; a++) {
        if (a%7==0){
        sum += a;
        }
    }
    printf ("Sum is : %d", sum);
    return 0;
}