/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int a, b;
  char operator;
  printf ("Enter a number: ");
  scanf ("%d", &a);
  printf ("Enter another number: ");
  scanf ("%d", &b);
  printf ("Enter operation: ");
  scanf ("%c", &operator);
switch (operator)
{
case '+':
  printf ("%d + %d", a, b);
  break;
case '-':
  printf ("%d - %d", a, b);
  break;
case '*':
  printf ("%d * %d", a, b);
  break;
case '/':
  printf ("%d / %d", a, b);
  break;
default:
  printf ("Incorrect operation!");
}
  return 0;
}
