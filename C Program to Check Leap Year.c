/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int year;
  printf ("Enter a year : ");
  scanf ("%d", &year);
  if (year % 400 == 0)
    {
      printf ("It's a leap year.");
    }
  else if (year % 100 == 0)
    {
      printf ("Its' not leap year.");
    }
  else if (year % 4 == 0)
    {
      printf ("Its' a leap year.");
    }
  else
    {
      printf ("It's common year.");
    }
  return 0;
}
