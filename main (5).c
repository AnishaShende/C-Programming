/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x = 1, y = 2, z = 3, temp;
    printf ("Values of x, y, and z are respectively %d, %d, and %d \n", x, y, z);
    temp = x;
    x = y;
    y = z;
    z = temp;
    printf ("Now values of x, y, and z are respectively %d, %d, and %d", x, y, z);
    return 0;
}
