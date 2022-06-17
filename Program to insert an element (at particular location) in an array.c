#include<stdio.h>

void main()
{
    int a[10],x,i,n,pos;
    printf("Enter the number of array element\n");
    scanf("%d",&n);
    printf("Enter the array with %d element\n", n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the key value and its position\n");
    scanf("%d%d" ,&x,&pos);
    
    for(i=n; i >= pos; i--)
    {
    a[i]=a[i-1];
    }
    a[pos-1]=x;
    printf("Array element\n ");
    for(i=0;i<n+1;i++)
    printf("%d\t",a[i]);
}
