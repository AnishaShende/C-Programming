/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  long long num;
  int count = 0;
  printf ("Enter a number : ");
  scanf ("%lld", &num);

  while (num != 0)
    {
      num /= 10;
      count++;
    }
  printf ("Number of digits in given number is : %d", count);
  return 0;
}
