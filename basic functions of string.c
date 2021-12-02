#include <stdio.h>
#include <string.h>
int main() {
char str1[100] = "Hello ", str2[] = "World!";
strcat(str1, str2);
puts(str1);
char str[20];
char s1[50], s2[50];
int j = strlen("HelloWorld");
int i=strcmp("Hello ", "World");
printf("%d %d",j,i);
//char str[20];
//char s1[50], s2[50];
strcpy(s1, "\nStudyTonight");
strcpy(s2, s1);
printf("%s\n", s2);
   return 0;
}
