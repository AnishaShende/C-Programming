#include <stdio.h>

typedef struct date{
    int year;
    char month[10];
    int day;
} date;
int main()
{
    struct date today;
    printf("Enter the year : \n");
    scanf("%d", &today.year);
    printf("Enter the month : \n");
    scanf("%s", today.month);
    printf("Enter the day : \n");
    scanf("%d", &today.day);
    // printf("Year is : %d\n", today.year);
    // printf("Month is : %d\n", today.month);
    // printf("Day is : %d\n", today.day);
    printf("The date is : %d %s %d.\n", today.day, today.month, today.year);
    return 0;
}
