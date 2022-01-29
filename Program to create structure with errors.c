#include <stdio.h>
#include <string.h>
int main()
{
    struct employee_1{
        int code;
        float salary;
        char name[20];
    };
    struct employee_1 e1;
    struct employee_2{
        int code;
        float salary;
        char name[20];
    };
    struct employee_2 e2;
    struct employee_3{
        int code;
        float salary;
        char name[20];
    };
    struct employee_3 e3;
    printf("Enter the code for employee 1 : ");
    scanf("%d", e1.code);
    printf("Enter the salary for employee 1 : ");
    scanf("%f", e1.salary);
    printf("Enter the name for employee 1 : ");
    scanf("%s", e1.name);
    printf("Enter the code for employee 2 : ");
    scanf("%d", e2.code);
    printf("Enter the salary for employee 2 : ");
    scanf("%f", e2.salary);
    printf("Enter the name for employee 2 : ");
    scanf("%s", e2.name);
    printf("Enter the code for employee 3 : ");
    scanf("%d", e3.code);
    printf("Enter the salary for employee 3 : ");
    scanf("%f", e3.salary);
    printf("Enter the name for employee 3 : ");
    scanf("%s", e3.name);
    printf("Code for Employee 1 is %d.", e1.code);
    printf("salary for Employee 1 is %f.", e1.salary);
    printf("name for Employee 1 is %s.", e1.name);
    printf("Code for Employee 2 is %d.", e2.code);
    printf("salary for Employee 2 is %f.", e2.salary);
    printf("name for Employee 2 is %s.", e2.name);
    printf("Code for Employee 3 is %d.", e3.code);
    printf("salary for Employee 3 is %f.", e3.salary);
    printf("name for Employee 3 is %s.", e3.name);
    return 0;
}
