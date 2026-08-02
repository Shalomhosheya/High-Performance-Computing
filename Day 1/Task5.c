# include <stdio.h>
const float Tax_rate = 0.20;
const int rate = 0.10;

int lastM,thisM,units;
float tot ,tax,pay;
int main()
{
printf("Enter last meter: ");scanf("%d",&lastM);
printf("Enter this meter: ");scanf("%d",&thisM);
units = thisM - lastM;
tot = units * rate;
tax = tot * Tax_rate;
pay = tot + tax;
printf("Total units: %d\n",units);
printf("Total amount: %.2f\n",tot);
printf("Tax: %.2f\n",tax);
printf("");

}
