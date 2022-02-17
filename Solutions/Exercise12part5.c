#include<stdio.h>

struct billCalculator
{
    char Username[20];
    char Address[20];
    char Month[20];
    float PerUnitRate;
    float UnitConsumption;
};

int main()
{
    struct billCalculator c1;
    float bill;

    printf("Username: "),scanf("%s",&c1.Username);
    printf("Address: "),scanf("%s",&c1.Address);
    printf("Month: "),scanf("%s",&c1.Month);
    printf("Per Unit Rate: "),scanf("%f",&c1.PerUnitRate);
    printf("Unit Consumption: "),scanf("%f",&c1.UnitConsumption);

    printf("\nBill :%.2f\n",c1.PerUnitRate*c1.UnitConsumption);

    return 0;
}





