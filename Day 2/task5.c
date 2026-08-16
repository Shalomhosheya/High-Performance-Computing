#include <stdio.h>

int main() {
    int no1, no2, no3, middle_number;
    
    printf("Enter first number: ");
    scanf("%d", &no1);

    printf("Enter second number: ");
    scanf("%d", &no2);

    printf("Enter third number: ");
    scanf("%d", &no3);



    if ((no1 > no2 && no1 < no3) || (no1 < no2 && no1 > no3)) {
        middle_number = no1;
    } else if ((no2 > no1 && no2 < no3) || (no2 < no1 && no2 > no3)) {
        middle_number = no2;
    } else {
        middle_number = no3;
    }

    

    return 0;
}