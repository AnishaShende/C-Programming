#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, a, rem, sum = 0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits onn.
    a = n;
    for (int i = 0; i <= a; i++) {
        rem = n%10;
        sum += rem;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}
