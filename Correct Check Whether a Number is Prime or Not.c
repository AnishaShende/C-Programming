/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
//    int num;
//    printf ("Enter a number : ");
//    scanf ("%d", &num);
//    if (num == 1 || num == 0) {
//        printf ("It's neither prime nor composite.");
//    } else if (num%1 == 0 && num%num == 0) {
//        printf ("It's a prime number.");
//    } else {
//        printf ("It's not a prime number.");
//    }
  int num, flag = 0;
  printf ("Enter a number : ");
  scanf ("%d", &num);
  for (int i = 2; i <= num / 2; i++)
    {
      if (num % i == 0)
	{
	  flag = 1;
	  break;
	}
    }
  if (num == 1)
    {
      printf ("%d is neither prime nor composite.", num);
    }
  else
    {
      if (flag == 0)
	{
	  printf ("It's a prime number.");
	}
      else
	{
	  printf ("It's not a prime number.");
	}
    }
  return 0;
}
