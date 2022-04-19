#include <stdio.h>

int queue[5], front = -1, rear = -1, n = 5, i, x;
void enqueue();
void dequeue();
void display();

void main(){
    int choice;
    // front = -1;
    // rear = -1;
    printf("----------Implementation of queue---------\n");
    do
    {
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
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
        default:
            printf("Invalid choice !\n");
            break;
        }
    } while (choice != 4);
}
void enqueue(){
    if (rear == n-1)
    {
        printf("Element can't be inserted, queue is full !\n");
    }
    else if(front == -1) {
        front = 0;
    }
    else{
        printf("Enter a number : ");
        scanf("%d", &x);
        rear++;
        queue[rear] = x;
        printf("%d element is inserted !\n", x);
    }
}
void dequeue(){
    if(front == -1){
        printf("Queue is empty !\n");
    }
    else{
        x = queue[front];
        printf("%d element is dequeued !\n", queue[front]);
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front ++;
        }
    }
}
void display(){
    if (rear == -1)
    {
        printf("No elements to display, queue is empty !\n");
    }
    else{
        printf("Elements in the queue are : ");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
