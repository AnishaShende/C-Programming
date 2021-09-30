/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int
main ()
{
  int i, n, sum = 0;
  printf ("Enter number : ");
  scanf ("%d", &n);
  do
    {
      i++;
      sum += i;
    }
  while (i < n);
  printf ("Sum of natural numbers are : %d\n", sum);
  return 0;
}
