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
  printf ("Enter a number : ");
  scanf ("%d", &a);
  printf ("Enter another number : ");
  scanf ("%d", &b);
  temp = a;
  a = b;
  b = temp;
  printf ("Number after swapping are a = %d\n", a);
  printf ("b = %d", b);
  return 0;

}