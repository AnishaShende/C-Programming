#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *ptr;
    struct Node *n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node*)malloc(sizeof(struct Node));
    ptr=n1;
    ptr->data=10;
    ptr->next=n2;
    printf("%d ", ptr->data);
    ptr->data=20;
    ptr->next=n3;
    printf("%d ", ptr->data);
    ptr->data=30;
    ptr->next=NULL;
    printf("%d ", ptr->data);
    return 0;
}
