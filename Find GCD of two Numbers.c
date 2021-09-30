/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int i, n1, n2, hcf;
  printf ("Enter a number : ");
  scanf ("%d%d", &n1, &n2);
  for (i = 1; i <= n1 || i <= n2; i++)
    {
      if (n1 % i == 0 && n2 % i == 0)
	{
	  hcf = i;
	}

    }
  printf ("The HCF of %d and %d is %d.", n1, n2, hcf);
  return 0;
}
