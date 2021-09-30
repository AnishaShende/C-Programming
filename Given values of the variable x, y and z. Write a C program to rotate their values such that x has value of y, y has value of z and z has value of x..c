/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x, y, z, temp;
    printf ("Enter the values of x, y, and z respectively : ");
    scanf ("%d %d %d", &x, &y, &z);
    printf ("Before swaping values of x, y, and z are %d, %d, and %d \n", x, y, z);
    temp = x;
    x = y;
    y = z;
    z = temp;
    printf ("Now after swaping values of x, y, and z are %d, %d, and %d", x, y, z);
    return 0;
}

