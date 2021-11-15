#include <stdio.h>
float area();
float circ();
int main()
{
    float ar, cr;
    ar = area();
    printf("Area is %.2f\n",ar);
    cr = circ();
    printf("Circumference is %.2f\n",cr);
    return 0;
}
float area(){
    float r = 20;
    float area = 3.14 * r * r;
    return area; 
}
float circ(){
    float r = 20;
    float circ = 2 * 3.14 *r;
    return circ; 
}
