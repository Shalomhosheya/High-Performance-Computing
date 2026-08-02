#include <stdio.h>

int main()
{
    int no1, no2;
    int sum;
    float avg;

    printf("Enter first number : ");
    scanf("%d", &no1);

    printf("Enter second number : ");
    scanf("%d", &no2);

    sum = no1 + no2;
    avg = sum / 2.0;

    printf("Sum is : %d\n", sum);
    printf("Average is : %.2f\n", avg);

    return 0;
}