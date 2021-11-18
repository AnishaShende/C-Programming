#include <stdio.h>
#include <stdlib.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divs(float a, float b);

void main()
{
    int a, b, c, res = 0;
    while(1){
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);
    printf("Enter operation :\n 1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n 5.Exit\n");
    scanf("%d", &c);
    switch(c){
       case 1: 
            res = add(a, b);
            printf("Answer is %d.\n", res); 
            break;
       case 2: 
            res = sub(a, b);
            printf("Answer is %d.\n", res);
            break;
       case 3: 
            res = mul(a, b);
            printf("Answer is %d.\n", res);
            break;
       case 4:
            printf("Answer is %.2f\n", divs(a, b));
            break;
       case 5: 
            exit(0);
    }
}
}
int add(int a, int b){
    int res = a+b;
    return res;
}
int sub(int a, int b){
    int res = a-b;
    return res;
}
int mul(int a, int b){
    int res = a*b;
    return res;
}
float divs(float a, float b){
    float res = a/b;
    return res;
}
