#include <stdio.h>
#include <conio.h>

void main()
{
    int phy, chem, bio, total,avg;
    printf ("Enter your physics marks : ");
    scanf ("%d", &phy);
    printf ("Enter your chemistry marks : ");
    scanf ("%d", &chem);
    printf ("Enter your biology marks : ");
    scanf ("%d", &bio);
    total = phy+chem+bio;
    avg = total/3;
    printf ("Your total marks are : %d\n", total);
    printf ("your average is : %d", avg);
    getch();
}
