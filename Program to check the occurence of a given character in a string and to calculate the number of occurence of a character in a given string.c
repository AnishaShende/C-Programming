#include <stdio.h>

int main()
{
    char str[] = "anishaanisha";
    char ch = 'z';
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == ch){
            count++;
        }
        i++;
    }
    if(count >= 1){
        printf("%c is present in the given string.\n", ch);
        printf("%c occured %d times in a given string.", ch, count);
    }
    else{
        printf("%c is not present in the given string.", ch);
    }
    return 0;
}
