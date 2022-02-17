#include <stdio.h>
#include <conio.h>

    int main()
    {
        int number,hundred,thousand,ten,unit,sum;
        printf("Enter Number: ");
        scanf("%d",&number);

        unit=number%10;
        ten=(number/10)%10;
        hundred=(number/100)%10;
        thousand=(number/1000)%10;

        printf("Unit: %d\n",unit);
        printf("Ten: %d\n",ten);
        printf("Hundred: %d\n",hundred);
        printf("Thousand: %d\n\n",thousand);

        sum=unit+ten+hundred+thousand;
        printf("Sum of individual digit = %d\n",sum);

        printf("Reverse is %d%d%d%d\n",unit,ten,hundred,thousand);

        return 0;
    }








