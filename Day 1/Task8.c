#include <stdio.h>

//enter 30000 outputs the note

int main()
{
    int salary;
    int notes5000, notes1000, notes500, notes100;

    printf("Enter your salary: \n");
    scanf("%d", &salary);

    notes5000 = salary / 5000;
    salary = salary % 5000;

    notes1000 = salary / 1000;
    salary = salary % 1000;

    notes500 = salary / 500;
    salary = salary % 500;

    notes100 = salary / 100;
    salary = salary % 100;

    printf("Number of 5000 notes: %d\n", notes5000);
    printf("Number of 1000 notes: %d\n", notes1000);
    printf("Number of 500 notes: %d\n", notes500);
    printf("Number of 100 notes: %d\n", notes100);

    return 0;
}