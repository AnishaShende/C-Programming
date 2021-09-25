#include<stdio.h>
#include<conio.h>

 void
main () 
{
  
int a, b;
  
printf ("Enter a Temperature: ");
  
scanf ("%d", &a);
  
b = (1.8 * a) + 32;
  
printf ("It's %d Fahrenheit.", b);
  
getch ();

}
