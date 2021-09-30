/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  char c;
  int uperc, lowerc;
  printf ("Enter a Alphabet : ");
  scanf ("%c", &c);
  uperc = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
  lowerc = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
  if (uperc || lowerc)
    {
      printf ("It's a vowel");

    }
  else
    {
      printf ("It's consonant");
    }
  return 0;
}
