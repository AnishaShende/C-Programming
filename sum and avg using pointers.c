#include <stdio.h>
void sum(int a, int b);
void avg(int a, int b);
int main()
{
    int h, i, *j;
    i = 5;
    h = 6;
    //*j = &i;
    //printf("The value of the i variable is %d\n", i);
    //printf("The address of the i variable is %u\n", j);
    sum(i, h);
    avg(i, h);
    return 0;
}
void sum(int a, int b){
    int res = a + b;
    printf("The sum of two numbers are %d\n", res);
    //printf("The address of the i variable inside the function is %u\n", &a);
}
void avg(int a, int b){
    int res = (a + b) / 2;
    printf("The average of two numbers are %d\n", res);
    //printf("The address of the i variable inside the function is %u\n", &a);
}
