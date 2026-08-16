#include <stdio.h>

const int size = 5;
int main() {

    int i,arr[size],max=0;
    printf("Enter 5 integers:\n");

    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        
        if (arr[i] > max) {
            max = arr[i];
            arr[i] = max;
        }

    }

    printf("The maximum of the integers is: %d\n", max);

}