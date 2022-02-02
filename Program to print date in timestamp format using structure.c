#include <stdio.h>

typedef struct date{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
} date;
// void display(date today){
//     printf("Date is : %d/%d/%d.\n", today.day, today.month, today.year);
// }
int main()
{
    struct date today = {2004, 12, 1, 9, 9, 9};
    
    //display(today);
    /**** Format is :
    yy-MM-dd HH:mm:ss ****/
    
    // printf("Enter the year : \n");
    // scanf("%d", &today.year);
    // printf("Enter the month : \n");
    // scanf("%s", today.month);
    // printf("Enter the day : \n");
    // scanf("%d", &today.day);
    // printf("Enter the hour : \n");
    // scanf("%d", &today.hour);
    // printf("Enter the minute : \n");
    // scanf("%d", &today.minute);
    // printf("Enter the second : \n");
    // scanf("%d", &today.second);
    
    // printf("Year is : %d\n", today.year);
    // printf("Month is : %d\n", today.month);
    // printf("Day is : %d\n", today.day);
    printf("The timestamp is : %02d-%02d-%d %02d:%02d:%02d.\n", today.day, today.month, today.year, today.hour, today.minute, today.second);
    return 0;
}
