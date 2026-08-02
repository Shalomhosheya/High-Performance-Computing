#include <stdio.h>

int main() {
    int no1, no2, no3, max;

    printf("Enter first number: ");
    scanf("%d", &no1);

    printf("Enter second number: ");
    scanf("%d", &no2);
    
    printf("Enter second number: ");
    scanf("%d", &no3);
    
    max = no1;


    if (no2 >= max)
        max = no2;
        
    if (no3 >= max)
       max = no3; 

    printf("Max is %d\n", max);

    return 0;
}