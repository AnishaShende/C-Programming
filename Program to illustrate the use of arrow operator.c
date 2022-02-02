#include <stdio.h>
struct employee{
    int age;
    char grade;
};
int main()
{
    struct employee emp1;
    struct employee *ptr;
    ptr = &emp1;
    ptr -> age = 24;
    ptr -> grade = 'A';
    printf("Emp1 age and grade is : %d and %c.\n", emp1.age, emp1.grade);
    return 0;
}
