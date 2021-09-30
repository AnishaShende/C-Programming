/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
int
main ()
{
  char c;
  printf ("Enter a character : ");
  scanf ("%c", &c);
  if (isalpha (c) == 0)
    {
      printf ("It's not a alphabet!");
    }
  else
    {
      printf ("You've entered a alphabet.");
    }
  return 0;
}
