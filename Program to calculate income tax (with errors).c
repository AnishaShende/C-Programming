#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  double inc, tax;
  printf("Enter income : ");
  scanf("%lf", &inc);
  if (inc < 150000){
    printf("No tax.");
  }
  else if (inc > 150001 && inc < 300000){
    tax = (inc - 150001)*0.10;
  }
  else if (inc > 300001 && inc < 500000){
    tax = (inc - 300001)*0.20;
  }
  else if (inc > 500001){
    tax = (inc - 500001)*0.30;
  }
  else {
    printf("It's Invalid !");
  }
  printf("%lf",tax);
  return 0;
}
