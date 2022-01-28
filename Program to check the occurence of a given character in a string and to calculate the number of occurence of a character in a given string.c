#include <stdio.h>

int main()
{
    char str[] = "anishaanisha";
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == 'a'){
            count++;
        }
        i++;
    }
    if(count >= 1){
        printf("a is present in the given string.\n");
        printf("a occured %d times in a given string.", count);
    }
    else{
        printf("a is not present in the given string.");
    }
    return 0;
}
