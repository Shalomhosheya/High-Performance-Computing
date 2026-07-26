# include <stdio.h>

int main()
{
    printf("......................water bill.............................\n");
    float lastmonth,currentmonth,unitconsumed,totalcharge,tax,totalpayable;
    
    printf("Enter the last month reading: ");
    scanf("%f",&lastmonth);

    printf("Enter the current month reading: ");
    scanf("%f",&currentmonth);

    unitconsumed = currentmonth - lastmonth;
    printf("Unit consumed: %.2f\n",unitconsumed);

    totalcharge = unitconsumed * 100;

    printf("Total charge: %.2f\n",totalcharge);
    tax = totalcharge * 20/100;

    printf("Tax: %.2f\n",tax);

    totalpayable = totalcharge + tax;

    printf("Total payable: %.2f\n",totalpayable);


}
