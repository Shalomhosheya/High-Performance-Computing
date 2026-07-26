#include <stdio.h>

int main()
{
    char ch;
    int value;

    printf("Enter an ASCII Value: ");
    scanf("%d", &value);

    ch = (char)value;

    printf("character of value %d is %c",value, ch);

    return 0;
}