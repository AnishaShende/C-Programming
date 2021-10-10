void main () {

      int num,i,f;
      f=1;
      printf("Enter a number : ");
      scanf("%d",&num);
      i = 1;
       while (i <= num) {
          f = f*i;
          i++;
        }
     printf("Factorial of %d is : %d", num, f);
     return 0;
}