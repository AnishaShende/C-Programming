#include <stdio.h>

int main()
{
    int marks[5];
    for(int i = 1; i < 6; i++){
        printf("Enter marks for student %d : \n", i);
        scanf("%d", &marks[i]);
    }
    for(int i = 1; i < 6; i++){
        printf("Marks for student %d is %d.\n", i, marks[i]);
    }
     return 0;
}
