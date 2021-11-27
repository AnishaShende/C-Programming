#include <stdio.h>
#include <math.h>

 int
main () 
{
  
double num, cubeRoot;
  
printf ("Enter a number : ");
  
scanf ("%lf", &num);
  
cubeRoot = cbrt (num);
  
printf ("Cube root of %.2lf =  %.2lf", num, cubeRoot);
  
 
return 0;

}
