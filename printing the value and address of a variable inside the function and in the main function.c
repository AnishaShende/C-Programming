#include <stdio.h>
void func(int a);
int main()
{
    int i, *j;
    i = 5;
    *j = &i;
    printf("The value of the i variable is %d\n", i);
    printf("The address of the i variable is %u\n", j);
    func(i);
    return 0;
}
void func(int a){
    printf("The value of the i variable inside the function is %d\n", a);
    printf("The address of the i variable inside the function is %u\n", &a);
}
