/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int a, ans, i;
  printf ("Enter a number for table multiplication : ");
  scanf ("%d", &a);
  for (i = 1; i <= 10; i++)
    {
      ans = i * a;
      printf ("%d x %d = %d\n", a, i, ans);
    }

  return 0;
}
