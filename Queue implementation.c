#include <stdio.h>

int queue[10], rear=-1, front=-1, n, x, i;

void enqueue();
void dequeue();
void display();

int main()
{
    int choice;
    printf("Enter the value for number of elements in queue : ");
    scanf("%d", &n);
    do{
      printf("\n1.ENDQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
      printf("Which operation you want to perform : ");
      scanf("%d", &choice);
      switch(choice){
        case 1:
            {
                enqueue();
                break;
            }
        case 2:
            {
                dequeue();
                break;
            }
        case 3:
            {
                display();
                break;
            }
        case 4:
            {
                break;
            }
        default:
            {
                printf("Invalid input!");
            }
        }  
    }
    while(choice!=4);
    return 0;
}
void enqueue(){
    if(rear == n-1){
        printf("Queue is full!");
    }
    else{
        printf("Enter the element to enqueue : ");
        scanf("%d", &x);
        if(front == -1){
            front = 0; // rear = 0 is wrong condition as it will insert an extra zero in our queue!
        }
        rear++;
    }
    queue[rear] = x;
}
void dequeue(){
    if(front == -1){
        printf("Queue is empty!");
    }
    else{
        printf("%d is dequeued from the queue.", queue[front]);
        x = queue[front];
    }
    if(front == rear){
        rear = -1;
        front = -1;
    }
    else{
        front++;
    }
}
void display(){
    if(rear != -1){
        printf("Elements in the queue are : ");
        for(i = front; i <= rear; i++){
        printf("%d ", queue[i]);
        }
    }
    else{
        printf("Queue is empty.");
        }
    }
