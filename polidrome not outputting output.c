/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int num, orinum, remaind;
  int revs = 0;
  printf ("Enter a number : ");
  scanf ("%d", &num);
  orinum = num;
  while (num != 0)
    {
      remaind = num / 10;
      revs = revs * 10 + remaind;
      num / 10;
    }
  if (revs == orinum) {
      printf("It's a Palidrome !");
  }
  else {
      printf("It's not Palidrome ");
  }
  return 0;
}
