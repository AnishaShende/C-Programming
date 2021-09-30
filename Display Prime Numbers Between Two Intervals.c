/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int high, low, flag;
    printf ("Enter a range : ");
    scanf ("%d %d", &low, &high);
    printf ("Prime numbers between %d and %d are : ", low, high);
    while (low < high) {
        flag = 0;
    
    if (low <= 1) {
        low++;
        continue;
    }
    for (int i = 2; i <= low / 2; i++) {
        if (low % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf ("%d ", low);
    low++;
}
    return 0;
}
