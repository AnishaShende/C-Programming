#include <stdio.h>

int main()
{
    //char str[] = {'A', 'n', 'i', 's', 'h', 'a', '\0'};
    char str[] = "Anisha";
    printf("String is : ");
    for(int i = 0; i < 6; i++){
        printf("%c", str[i]);
    }
    return 0;
}
