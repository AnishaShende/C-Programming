#include <stdio.h>
void slice(char *str, int strt, int end){
    int i = 0;
    while((strt + i) <= end){
        str[i] = str[i + strt];
        i++;
    }
    str[i] = '\0';
}

int main()
{
    char str[30];
    int a ,b;
    printf("Enter a string : ");
    scanf("%s", str);
    printf("Enter the starting and ending value for string : \n");
    scanf("%d %d", &a, &b);
    slice(str, a, b);
    printf("Sliced value is : %s", str);
    return 0;
}
