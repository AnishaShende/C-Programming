/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  double a, b, temp;
  printf ("Enter a number: ");
  scanf ("%lf", &a);
  printf ("Enter another number: ");
  scanf ("%lf", &b);
  temp = a;
  a = b;
  b = temp;
  printf ("after swapping first number is: %.2lf\n", a);
  /* Blockquote.
     Basically when we % w.p f for output w refers to the minimum number of position 
     to be use for displaying the value and p refers to the number of digit after decimal point.
     %3.2f floating point having 3 wide and 2 number after decimal. */
  printf ("after swapping second number is: %.2lf\n", b);
  return 0;
}
