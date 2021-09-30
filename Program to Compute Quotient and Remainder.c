/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int dividend, quotient, remainder, diviser;
  printf ("Enter dividend: ");
  scanf ("%d", &dividend);
  printf ("Enter diviser: ");
  scanf ("%d", &diviser);
  quotient = dividend / diviser;
  remainder = dividend % diviser;
  printf ("quotient is: %d\n", quotient);
  printf ("remainder is: %d", remainder);
  return 0;
}
