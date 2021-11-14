#include <stdio.h>

int main()
{
    int student = 4;
    int subject = 3;
    int arr[3][2];
    for(int i = 0; i < student; i++){
        for(int j = 0; j < subject; j++){
            printf("Enter marks of student %d in subject %d : ", i+1, j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0; i < student; i++){
        for(int j = 0; j < subject; j++){
            printf("Marks of student %d in subject %d is %d\n", i+1, j+1, arr[i][j]);
        }
    }
    return 0;
}
