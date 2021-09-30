/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int a;
  printf ("Enter a number: ");
  scanf ("%d", &a);
  if (a % 2 == 0)
    {
      printf ("It's an even number.");
    }
  else
    {
      printf ("It's a odd number.");
      return 0;
    }
}
