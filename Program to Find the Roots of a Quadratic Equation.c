/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int
main ()
{
  double a, b, c, discriminant, root1, root2, realpart, imgpart;
  printf ("Enter three coifficient numbers : ");
  scanf ("%lf%lf%lf", &a, &b, &c);
  discriminant = b * b - 4 * a * c;
  if (discriminant > 0)
    {
      root1 = (-b + sqrt (discriminant) / (2 * a));
      root2 = (-b - sqrt (discriminant) / (2 * a));
      printf ("answers are root1 = %.2lf\n and root2 = %.2lf\n", root1,
	      root2);
    }
  else if (discriminant == 0)
    {
      root1 = (-b / 2 * a);
      root2 = (-b / 2 * a);
      printf ("answers are root1 = %.2lf\n and root2 = %.2lf\n", root1,
	      root2);
    }
  else
    {
      realpart = (-b / (2 * a));
      imgpart = (sqrt (-discriminant) / (2 * a));
      printf ("answers are root1 = %.2lf+%.2lfi\n and root2 = %.2lf-%.2lfi\n",
	      realpart, imgpart, realpart, imgpart);
    }
  return 0;
}
