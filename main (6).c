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
    if (vowel == 'a') {
        printf ("%c is a vowel !", vowel);
    }
    else if (vowel == 'e') {
        printf ("%c is a vowel !", vowel);
    }
    else if (vowel == 'i') {
        printf ("%c is a vowel !", vowel);
    }
    else if (vowel == 'o') {
        printf ("%c is a vowel !", vowel);
    }
    else if (vowel == 'u') {
        printf ("%c is a vowel !", vowel);
    }
    else {
        printf ("%c is a consonent !", vowel);
    }
    getch ();
}
