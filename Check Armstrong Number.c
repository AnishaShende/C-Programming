/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int num, orinum, remain, result = 0;
  printf ("Enter a number (three digit number) : ");
  scanf ("%d", &num);
  orinum = num;
  while (num != 0)
    {
      remain = num % 10; //we get the last digit of the number that is remainder.
      result += remain * remain * remain;
      num /= 10;
    }
  if (result == orinum)
    {
      printf ("It's an Armstrong number.");
    }
  else
    {
      printf ("It's not an Armstrong number.");
    }
  return 0;
}
