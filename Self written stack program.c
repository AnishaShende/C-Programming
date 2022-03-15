#include <stdio.h>

int top, n, i, x, stack[20];

void push();
void pop();
void display();

int main()
{
    int top = -1, choice;
    printf("Enter the number of elements in stack : ");
    scanf("%d", &n);
    do{
        printf("1.Push\n2.pop\n3.Display\n4.Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1: {
                push();
                break;
            }
            case 2: {
                pop();
                break;
            }
            case 3: {
                display();
                break;
            }
            case 4: {
                break;
            }
        }
    }
    while(choice != 4);
    return 0;
}
void push(){
    if(top >= n-1){
        printf("Overflow : stack is full\n");
    }
    else{
        printf("Enter the number to push : ");
        scanf("%d", &x);
        top ++;
        stack[top] = x;
    }
}
void pop(){
    if(top <= -1){
        printf("Underflow : stack is empty\n");
    }
    else {
        printf("%d element is popped\n",stack[top]);
        stack[top] = x;
        top --;
    }
}
void display(){
    if(top >= 0){
        printf("Stack is : \n");
        for(i = top; i >= 0; i--){
            printf("%d\n", stack[i]);
        }
    }
    else {
        printf("Stack is empty\n");
        }
    }
