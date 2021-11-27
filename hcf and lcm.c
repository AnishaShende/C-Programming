#include <stdio.h>
void lcm_hcf(int ,int); 
 
void main()
{
    int no1,no2;
 
    printf("Enter two Numbers\n");
    scanf("%d %d",&no1,&no2);
    lcm_hcf(no1,no2);
}
 
void lcm_hcf(int n1,int n2)
{
    int hcf,lcm,remainder,numerator,denominator;
    if (n1>n2)
    {
        numerator=n1;
        denominator=n2;
    }
    else
    {
        numerator=n2;
        denominator=n1;
    }
    remainder=numerator%denominator;
    while (remainder!=0)
    {
        numerator=denominator;
        denominator=remainder;
        remainder=numerator%denominator;
    }
    hcf = denominator;
    lcm = n1*n2/hcf;
 
    printf("HCF of %d and %d = %d\n",n1,n2,hcf);
    printf("LCM of %d and %d = %d\n",n1,n2,lcm);
}
