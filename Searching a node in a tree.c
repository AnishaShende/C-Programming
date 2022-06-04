#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node *left, *right;
};
struct Node *newNode(int item){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->value=item;
    temp->left=temp->right=NULL;
    return temp;
};
int search(struct Node *root, int value){
    while(root != NULL){
        if(value > root->value){
            root=root->right;
        }
        else if(value < root->value){
            root=root->left;
        }
        else {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int item = 50;
    int found;
    struct Node *root = newNode(50);
    root->left=newNode(25);
    root->right=newNode(75);
    root->left->left=newNode(20);
    root->left->right=newNode(30);
    root->right->left=newNode(60);
    root->right->right=newNode(80);
    found=search(root, item);
    if(found){
        printf("Element %d found!", item);
    }
    else{
        printf("Element not found!");
    }
    return 0;
}
