#include<stdio.h>
int main()
{
    int celsius,fahrenheit;

    printf("Enter Temperature in Celsius: ");
    scanf("%d",&celsius);

    fahrenheit=(celsius*1.8)+32;
    printf("Temperature in Fahrenheit: %d\n",fahrenheit);

    return 0;
}
