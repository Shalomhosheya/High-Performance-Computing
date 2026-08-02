#include <stdio.h>

int main()
{
    int no1, no2;
    float BMI;

    printf("Enter Height : ");
    scanf("%d", &no1);

    printf("Enter weight : ");
    scanf("%d", &no2);

    
    BMI = no2 / no1*no1;

    printf("BMI is : %7.2f\n", BMI);
    
    return 0;
}