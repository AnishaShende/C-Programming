/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int num, rev, remaind;
  printf ("Enter a number : ");
  scanf ("%d", &num);
  while (num != 0)
    {
      remaind = num % 10;
      rev = rev * 10 + remaind;
      num /= 10;
    }
  printf ("Reverse is : %d", rev);
  return 0;
}
