/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  unsigned long long int fact = 1;
  int n;
  printf ("Enter a number : ");
  scanf ("%d", &n);
  if (n < 0)
    {
      printf ("Error occured!");
    }
  else
    {
      for (int i = 1; i <= n; i++)
	{
	  fact *= i;
	}

    }
  printf ("factorial of %d is : %llu", n, fact);
  return 0;
}
