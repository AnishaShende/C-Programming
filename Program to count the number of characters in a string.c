#include <stdio.h>
//#include <string.h>

int main()
{
    char str[] = "Anisha Avinash Shende";
    char *ptr = str;
    int sum = 0;
    while(*ptr != '\0'){
        sum ++;
        *ptr++;
    }
    printf("String length is : %d\n", sum);
    return 0;
}

/*char str[] = "Anisha Shende";
    printf("String length is : %d\n", strlen(str));*/
