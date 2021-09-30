/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int a, b, c;
  printf ("Enter a number: ");
  scanf ("%d", &a);
  printf ("Enter another number: ");
  scanf ("%d", &b);
  c = a + b;
  printf ("Addition is: %d", c);
  return 0;
}
