/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int
main ()

{
  int a, b, c;

  printf ("Enter three numbers: ");

  scanf ("%d %d %d", &a, &b, &c);
 
 if (a > b)
    
{
      if (a > c)
	
{
	  printf ("a is greatest number.");
	}
 
   }
  
else if (b > c)
    
{
      printf ("b is greatest number.");
    }
 
 else
    {
      printf ("c is greatest number.");
    }
  
return 0;
}
