#include <stdio.h>

#define SIZE 3

int main()
{
    int arr[SIZE];
    int i, max;

    printf("Enter 3 numbers:\n");

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 1; i < SIZE; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum number is %d", max);

    return 0;
}