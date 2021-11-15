#include <stdio.h>
float area(float r);
float circ(float r);
int main()
{
    float r, ar, cr;
    printf("Enter radius of circle : ");
    scanf("%f", &r);
    ar = area(r);
    printf("Area is %.2f\n",ar);
    cr = circ(r);
    printf("Circumference is %.2f\n",cr);
    return 0;
}
float area(float r){
    float area = 3.14 * r * r;
    return area; 
}
float circ(float r){
    float circ = 2 * 3.14 *r;
    return circ; 
}
