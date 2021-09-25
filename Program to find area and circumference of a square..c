#include<stdio.h>
#include<conio.h>

 void
main () 
{
  
int a, b, c;
  
printf ("Enter a length of side of square: ");
  
scanf ("%d", &a);
  
b = a * a;
  
printf ("Area of square is: %d\n", b);
  
c = 4 * a;
  
printf ("Circumference of square is: %d", c);
  
getch ();

}
