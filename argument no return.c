#include <stdio.h>
void area(float r);
void circ(float r);
int main()
{
    float r;
    printf("Enter radius of circle : ");
    scanf("%f", &r);
    area(r);
    circ(r);
    return 0;
}
void area(float r){
    float area;
    area = 3.14 * r * r;
    printf("Area is %.2f\n",area);
}
void circ(float r){
    float circ = 2 * 3.14 *r;
    printf("Circumference is %.2f\n",circ);
}
