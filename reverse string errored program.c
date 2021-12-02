#include <stdio.h>
#include <string.h>
int
main ()
{
char s1[50];
printf("Enter your string: ");
scanf ("%s", s1);
printf("\nYour reverse string is: %s", strrev(s1));
return (0);
}
