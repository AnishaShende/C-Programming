#include<stdio.h>
#include<conio.h>
void
main ()
{
  int a[10], n;
  int i, search;

  printf ("Enter number of element : ");
  scanf ("%d", &n);
  printf ("Enter elements of an array : \n");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);

    }
  printf ("Enter number you want to search : ");
  scanf ("%d", &search);
  for (i = 0; i < n; i++)
    {
      if (search == a[i])
	{
	  printf ("%d element is present at %d location.\n", search, i+1);
	  break;
	}
    }
  if (i == n)
    printf ("%d element is not present in array!", search);
}
