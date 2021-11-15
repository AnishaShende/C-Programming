#include <stdio.h>
void area();
void circ();
int main()
{
    area();
    circ();
    return 0;
}
void area(){
    float r = 20;
    float area;
    area = 3.14 * r * r;
    printf("Area is %.2f\n",area);
}
void circ(){
    float r = 20;
    float circ = 2 * 3.14 *r;
    printf("Circumference is %.2f\n",circ);
}
