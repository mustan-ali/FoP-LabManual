#include <stdio.h>
int main()
{
    int Number,digit,Sum=0,i=1,x=1;

    printf("Enter  5 digit Number: ");
    scanf("%d",&Number);

    while(i<6)
    {
        digit=Number/x%10;
        x=x*10;

        Sum=Sum+digit;
        i++;
    }
    printf("Sum: %d",Sum);

    return 0;
}
