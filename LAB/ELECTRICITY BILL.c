#include<stdio.h>
#include<stdlib.h>
int electricity_bill();
int main()
{
    int units=0;
    scanf("%d",&units);
    electricity_bill(units);
    return 0;
}
int electricity_bill(int units)
{
    float bill_amount;
    if (units<=200)
        bill_amount=units*0.5;
    else if(units>200 && units<=400)
        bill_amount=(100+(units-200)*0.65);
    else if(units>400 && units<=600)
        bill_amount=(230+(units-400)*0.8);
    else
        bill_amount=(390+(units-600)*1);
    printf("%.2f",bill_amount);
    return 0;
}
