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
      remain = num % 10;
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