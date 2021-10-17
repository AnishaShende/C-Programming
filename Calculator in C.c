#include <stdio.h>

int
main ()
{
  int a, b;
  char operator;
  printf ("Enter operation: ");
  scanf ("%s", &operator);
  printf ("Enter a number: ");
  scanf ("%d", &a);
  printf ("Enter another number: ");
  scanf ("%d", &b);
switch (operator)
{
case '+':
  printf ("%d", a + b);
  break;
case '-':
  printf ("%d", a - b);
  break;
case '*':
  printf ("%d", a * b);
  break;
case '/':
  printf ("%d", a / b);
  break;
case '%':
  printf ("%d", a % b);
  break;
default:
  printf ("Incorrect operation!");
}
  return 0;
}
