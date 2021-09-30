/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int number, i;
  printf ("Enter a number: ");
  scanf ("%d", &number);
  printf ("Factors of %d is: ", number);
  for (i = 1; i <= number; i++)
    {
      if (number % i == 0)
	{
	  printf ("%d ", i);
	}
    }
  return 0;
}
