/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void divs(float a, float b);

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
            add(a, b); break;
       case 2: 
            sub(a, b); break;
       case 3: 
            mul(a, b); break;
       case 4: 
            divs(a, b); break;
       case 5: 
            exit(0);
    }
}
}
void add(int a, int b){
    int res;
    res = a+b;
    printf("Answer is %d.\n", res);
}
void sub(int a, int b){
    int res;
    res = a-b;
    printf("Answer is %d.\n", res);
}
void mul(int a, int b){
    int res;
    res = a*b;
    printf("Answer is %d.\n", res);
}
void divs(float a, float b){
    float res;
    res = a/b;
    printf("Answer is %f.\n", res);
}
