/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int num, count, sum;
  printf ("Enter a number: ");
  scanf ("%d", &num);
  for (count = 1; count <= num; count++)
    {
      sum += count;
    }
  printf ("sum is %d", sum);
  return 0;
}
