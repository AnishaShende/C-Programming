#include<stdio.h>
#include<conio.h>

 void 
main () 
{
  
 
 
int a, b;
  
 
 
printf ("Enter a number: ");
  
 
 
scanf ("%d", &a);
  
 
 
if (a % 2 == 0 && a % 3 == 0 && a % 5 == 0 && a % 6 == 0)
    
    {
      
 
printf ("%d is divisible by all 2, 3, 5, and 6.\n", a);
    
 
}
  
  else if (a % 2 == 0)
    
    {
      
 
printf ("%d is divisible by 2. \n", a);
    
 
}
  
 
  else if (a % 3 == 0)
    
    {
      
 
printf ("%d is divisible by 3.\n", a);
    
 
}
  
  else if (a % 5 == 0)
    
    {
      
 
printf ("%d is divisible by 5.\n", a);
    
 
}
  
  else if (a % 6 == 0)
    
    {
      
 
printf ("%d is divisible by 6.\n", a);
    
 
}
  
  else
    
    {
      
 
printf ("%d is not divisible by 2, 3, 5, or 6.\n", a);
    
 
}
  
 
 
getch ();

 
 
}
