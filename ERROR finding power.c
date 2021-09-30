/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int base, expo = 1;
  printf ("Enter base : ");
  scanf ("%d", &base);
  printf ("Enter exponent : ");
  scanf ("%d", &expo);
  for (int i = expo; i < 0; i--)
    {
      expo *= base;
    }
  printf ("Power is : %d", base);
  return 0;
}
