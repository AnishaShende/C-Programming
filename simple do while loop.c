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
  /*printf("Enter a number: ");
     scanf("%d", &a); */
  do
    {
      printf ("Enter number: ");
      scanf ("%d", &a);
    }
  while (a != 0);
  printf ("Gotcha!");
  return 0;

}
