/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int n, fibonum;
  int a = 0;
  int b = 1;
  printf ("Enter number of terms you want : ");
  scanf ("%d", &n);
  for (int i = 1; i <= n; i++)
    {
      printf ("%d, ", a);
      fibonum = a + b;
      a = b;
      b = fibonum;

    }
  return 0;
}
