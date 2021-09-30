/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  float a, b, c;
  printf ("Enter a number: ");
  scanf ("%f", &a);
  printf ("Enter another number: ");
  scanf ("%f", &b);
  c = a * b;
  printf ("The multiplication of two numbers are: %f", c);
  return 0;
}
