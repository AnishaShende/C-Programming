#include <stdio.h>

typedef struct complex{
    int real;
    int complex;
}comp;

void rdisplay(comp c){
    printf("The value of real numbers are : ");
    printf("%d\n", c.real);
}
void cdisplay(comp c){
    printf("The value of complex numbers are : ");
    printf("%d\n", c.complex);
}
int main()
{
    comp cnum[5];
    for(int i = 0; i < 5; i++){
        printf("Enter real number for %d position : ", i+1);
        scanf("%d", &cnum[i].real);
    }
    for(int i = 0; i < 5; i++){
        printf("Enter complex number for %d position : ", i+1);
        scanf("%d", &cnum[i].complex);
    }
    for(int i = 0; i < 5; i++){
        rdisplay(cnum[i]);
    }
    for(int i = 0; i < 5; i++){
        cdisplay(cnum[i]);
    }
    return 0;
}
