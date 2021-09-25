/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>

int main()
{
    char vowel;
    printf ("Enter a character : ");
    scanf ("%c", &vowel);
    if (vowel == 'a' || vowel == 'A') {
        printf ("%c is a vowel !", vowel);
    }
    else if (vowel == 'e' || vowel == 'E' ) {
        printf ("%c is a vowel !", vowel);
    }
    else if (vowel == 'i' || vowel == 'I') {
        printf ("%c is a vowel !", vowel);
    }
    else if (vowel == 'o' || vowel == 'O') {
        printf ("%c is a vowel !", vowel);
    }
    else if (vowel == 'u' || vowel == 'U') {
        printf ("%c is a vowel !", vowel);
    }
    else {
        printf ("%c is a consonent !", vowel);
    }
    getch ();
}
