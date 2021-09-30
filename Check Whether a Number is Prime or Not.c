/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int num;
  printf ("Enter a number : ");
  scanf ("%d", &num);
  if (num == 0 || num == 1)
    {
      printf ("%d is neither prime nor composite.", num);
    }
  else if (num % 1 == 0 && num % num == 0)
    {
      printf ("%d is a prime number.", num);
    }
  else
    {
      printf ("%d is not a prime number.", num);
    }
  return 0;
}
