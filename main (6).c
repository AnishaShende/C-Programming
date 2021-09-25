#include<stdio.h>
#include<conio.h>

 void 
main () 
{
int a, b;
printf ("Enter a number: ");
scanf ("%d", &a);
b = a*a*a;
printf ("Cube of %d is %d.", a, b);
getch ();
}