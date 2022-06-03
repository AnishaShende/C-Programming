#include <stdio.h>
#define MAX 5
int i, FRONT = -1, REAR = -1, x;
int queue[MAX];

void enqueue();
void dequeue();
void display();

int main()
{
    int choice;
    printf("\nQueue implementation");
    while(choice != 4){
        printf("\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d", &choice);
        switch(choice){
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default :
            printf("Invalid choice !\n");
            break;
        }
    }
    return 0;
}
void enqueue(){
    if((REAR+1)%MAX == FRONT){
        printf("Queue overflow !\n");
    }
    else {
        printf("Enter the element : ");
        scanf("%d", &x);
        if(FRONT = -1){
            FRONT = 0;
        }
        REAR=(REAR+1)%MAX;
    }
    queue[REAR] = x;
}
void dequeue(){
    if(FRONT == -1 && REAR == -1){
        printf("Queue is empty!");
    }
    else if(FRONT == REAR){
        REAR = -1;
        FRONT = -1;
    }
    else{
        printf("%d is dequeued from the queue.", queue[FRONT]);
        x = queue[FRONT];
        FRONT = (FRONT+1)%MAX;
    }
}
void display(){
    i = FRONT;
    if(FRONT == -1 && REAR == -1){
        printf("Queue is empty !\n");
    }
    else{
        printf("Elements in the queue are : \n");
        while(i <= REAR){
            printf("%d ", queue[i]);
            i = (i+1)%MAX;
        }
    }
}
