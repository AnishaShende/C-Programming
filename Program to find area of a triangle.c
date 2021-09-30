/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float base, height, area;
    printf ("Enter base and height of the triangle :\n");
    scanf ("%f %f", &base, &height);
    area = ((base*height)/2);
    printf ("Area of triangle is : %2.2f", area);
    return 0;
}
