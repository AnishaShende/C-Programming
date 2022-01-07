#include <stdio.h>

int main()
{
    char ch[10];
    char str[10];
    char c;
    int i = 0;
    
    printf("Enter 1st string : \n");
    scanf("%s", str);
    printf("Enter 2nd string : \n");
    
    while(c != '\n'){
        fflush(stdin);
        scanf("%c", &c);
        ch[i] = c;
        i++;
    }
    ch[i] = '\0';
    printf("1st string is : %s\n", str);
    printf("2nd string is : %s", ch);
    return 0;
}
