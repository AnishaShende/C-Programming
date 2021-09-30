/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int n1, n2, lcm;
  printf ("Enter a number : ");
  scanf ("%d%d", &n1, &n2);
  if (n1 > n2)
    {
      lcm = n1;
    }
  else
    {
      lcm = n2;
    }
  while (1)
    {
      if (lcm % n1 == 0 && lcm % n2 == 0)
	{
	  printf ("The LCM of %d and %d is %d.", n1, n2, lcm);
	  break;
	}
      lcm++;
    }

  return 0;
}
