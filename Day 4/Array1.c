#include <stdio.h>

const int size = 5;
int main() {

    int i,arr[size],sum=0;
    printf("Enter 5 integers:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("The sum of the integers is: %d\n", sum);
    return 0;
}