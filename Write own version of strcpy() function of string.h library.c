#include <stdio.h>
int main()
{
    char str1[20];
    char str2[20];
    int i = 0;
    printf("Enter a string : ");
    gets(str1);
    while(str1[i] != '\0'){
        str2[i] = str1[i];
        i++;
    }
    printf("str1 value is : ");
    puts(str1);
    printf("str2 value is : ");
    puts(str2);
    return 0;
}
