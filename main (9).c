/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>

int main()
{
    float a = 100, b;
    printf ("Enter ruppees : \n");
    scanf ("%f", &b);
    b *= a;
    printf ("It worth %7.3f paise.", b);
    getch ();
}
