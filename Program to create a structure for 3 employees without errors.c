#include <stdio.h>
#include <string.h>
struct employee{
        int code;
        float salary;
        char name[20];
    };
int main()
{
    struct employee e1, e2, e3;
    printf("Enter the code for employee 1 : ");
    scanf("%d", &e1.code);
    printf("Enter the salary for employee 1 : ");
    scanf("%f", &e1.salary);
    printf("Enter the name for employee 1 : ");
    scanf("%s", e1.name);
    printf("Enter the code for employee 2 : ");
    scanf("%d", &e2.code);
    printf("Enter the salary for employee 2 : ");
    scanf("%f", &e2.salary);
    printf("Enter the name for employee 2 : ");
    scanf("%s", e2.name);
    printf("Enter the code for employee 3 : ");
    scanf("%d", &e3.code);
    printf("Enter the salary for employee 3 : ");
    scanf("%f", &e3.salary);
    printf("Enter the name for employee 3 : ");
    scanf("%s", e3.name);
    printf("Code for Employee 1 is %d.\n", e1.code);
    printf("salary for Employee 1 is %f.\n", e1.salary);
    printf("name for Employee 1 is %s.\n", e1.name);
    printf("Code for Employee 2 is %d.\n", e2.code);
    printf("salary for Employee 2 is %f.\n", e2.salary);
    printf("name for Employee 2 is %s.\n", e2.name);
    printf("Code for Employee 3 is %d.\n", e3.code);
    printf("salary for Employee 3 is %f.\n", e3.salary);
    printf("name for Employee 3 is %s.\n", e3.name);
    return 0;
}
