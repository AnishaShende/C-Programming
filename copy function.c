#include <stdio.h>
#include <string.h>
int main() {
   char str1[100] = "Hello ", str2[] = "World!";
   strcat(str1, str2);
  puts(str1);
   return 0;
}
