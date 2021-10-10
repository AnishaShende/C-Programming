/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    switch (a) {
     case 1: printf("Monday"); 
        break;
     case 2: printf("Tuesday"); 
        break;
     case 3: printf("Wednesday"); 
        break;
     case 4: printf("Thrusday"); 
        break;
     case 5: printf("Friday"); 
        break;
     case 6: printf("Saturday"); 
        break;
     case 7: printf("Sunday"); 
        break;
     default: printf("Invalid");
    }
    return 0;
}
/*write a C program using switch statement to 
  print week day with respect to inputed number.*/
