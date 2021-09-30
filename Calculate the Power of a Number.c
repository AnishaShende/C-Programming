/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int base, expo;
  int result = 1;
  printf ("Enter base : ");
  scanf ("%d", &base);
  printf ("Enter exponent : ");
  scanf ("%d", &expo);
  while (expo != 0)
    {
      result *= base;
      --expo;
    }
  printf ("Power is : %d", result);
  return 0;
}
