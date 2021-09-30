/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int a, b, temp;
  printf ("Enter a number A: ");
  scanf ("%d", &a);
  printf ("Enter another number B: ");
  scanf ("%d", &b);
  /*b == temp;
     a == temp;
     b == a; */
  printf ("Value of A: %d\n", b);
  printf ("Value of B: %d", a);
  return 0;
}
