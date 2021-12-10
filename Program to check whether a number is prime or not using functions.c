/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int prime(int num);
void main()
{
	int num, res = 0;
	printf("Enter a number : ");
	scanf("%d",&num);
	res = prime(num);
	if(res == 0){
		printf("%d is a prime nubmer.",num);
	}
	else{
		printf("%d is not a prime number.",num);
	}
}
int prime(int num)
{
	int i;
	for(i=2;i<=num/2;i++)
	{
		if(num % i != 0){
			continue;
		}
		else{
			return 1;
		}
	}
	return 0;
}
