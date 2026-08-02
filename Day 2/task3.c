#include <stdio.h>

int main() {
    int no1, no2, max;

    printf("Enter first number: ");
    scanf("%d", &no1);

    printf("Enter second number: ");
    scanf("%d", &no2);

    if (no1 > no2)
        max = no1;

    if (no2 >= no1)
        max = no2;

    printf("Max is %d\n", max);

    return 0;
}