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
      remaind = num % 10;
      revs = revs * 10 + remaind;
      num /= 10;
    }
  if (orinum == revs)
    {
      printf ("It's a Palidrome !");
    }
  else
    {
      printf ("It's not Palidrome.");
    }
  return 0;
}