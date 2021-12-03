#include <stdio.h> 
void main() {
int var = 57;
int *ptr;
ptr = &var;
printf("Address of var variable is: %x\n", &var);
printf("Address stored in pointer variable ptr is: %x\n", ptr);
printf("Value of var variable or the value stored at address ptr is %d", *ptr);
}
