/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>

int main()
{
    float bs, hra, ga, da;
    printf ("Enter basic salary of employee : ");
    scanf ("%f", &bs);
    printf ("Enter HRA : ");
    scanf ("%f", &hra);
    printf ("Enter DA : ");
    scanf ("%f", &da);
    hra = (hra*bs)/100;
    da = (da*bs)/100;
    ga = bs + hra + da;
    printf ("gross salary = %7.2f", ga);
    getch ();
}
