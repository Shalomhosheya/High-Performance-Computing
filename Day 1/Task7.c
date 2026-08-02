#include <stdio.h>

int main()
{
    char ch;
    char capital;

    printf("Enter a lowercase letter: ");
    scanf(" %c", &ch);

    capital = ch - 32;    

    printf("Uppercase character: %c\n", capital);

    return 0;
}