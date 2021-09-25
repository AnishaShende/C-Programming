#include<stdio.h>
#include<conio.h>

 void
main () 
{
  
int a, b, c;
  
printf ("Enter radius of circle: ");
  
scanf ("%d", &a);
  
b = 3.14 * a * a;
  
printf ("Area of circle is:%d\n", b);
  
c = 2 * 3.14 * a;
  
printf ("Circumference of circle is:%d", c);
  
getch ();

}
