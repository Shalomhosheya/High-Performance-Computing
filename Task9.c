#include <stdio.h>

//enter 30000 outputs the note

int main()
{

    int days,hours, minutes, seconds;


    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    days = seconds / (24 * 3600);
    seconds = seconds % (24 * 3600);
     
    hours = seconds / 3600;
    seconds = seconds % 3600;

    minutes = seconds / 60;
    seconds = seconds % 60;

    printf("Days: %d\n", days);
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);

    return 0;
}