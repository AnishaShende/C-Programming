#include <stdio.h>

typedef struct date{
    int day;
    int month;
    int year;    
} date;
void display(date today){
    printf("Date is : %d/%d/%d.\n", today.day, today.month, today.year);
}
int main()
{
    struct date today = {1, 12, 2004};
    display(today);
    // printf("Enter the year : \n");
    // scanf("%d", &today.year);
    // printf("Enter the month : \n");
    // scanf("%s", today.month);
    // printf("Enter the day : \n");
    // scanf("%d", &today.day);
    // printf("Year is : %d\n", today.year);
    // printf("Month is : %d\n", today.month);
    // printf("Day is : %d\n", today.day);
    //printf("The date is : %d %s %d.\n", today.day, today.month, today.year);
    return 0;
}
