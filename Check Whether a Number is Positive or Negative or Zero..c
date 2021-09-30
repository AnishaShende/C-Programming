/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int number;
  printf ("Enter a number : ");
  scanf ("%d", &number);
  if (number < 0)
    {
      printf ("Its' a negative number.");
    }
  else if (number > 0)
    {
      printf ("It's a positive number.");
    }
  else
    {
      printf ("You entered a ZERO.");
    }
  return 0;
}
