/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int i;
  double d;
  float f;
  char c;
  /*printf("Enter an integer: ");
     scanf("%d", i);
     printf("Enter a double: ");
     scanf("%lf", d);
     printf("Enter an floating point number: ");
     scanf("%f", f);
     printf("Enter a character: ");
     scanf("%c", c); */
  printf ("Size of integer is: %zu bytes\n", sizeof (i));
  printf ("Size of double is: %zu bytes\n", sizeof (d));
  printf ("Size of floating point number is: %zu bytes\n", sizeof (f));
  printf ("Size of character is: %zu bytes\n", sizeof (c));
  return 0;
}
