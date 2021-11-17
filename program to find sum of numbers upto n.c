 #include <stdio.h>

 int main()
 {
     int num, sum = 0;
     printf("Enter a number for sum : ");
     scanf("%d", &num);
     for (int i = 0; i <= num; i++){
          sum += i;
     }
     printf("Sum of number upto %d is %d.", num, sum);
     return 0;
 }
