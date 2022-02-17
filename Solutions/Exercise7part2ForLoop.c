#include<stdio.h>

int main()
{
    int number1, number2, i, result=0;

    printf("Enter Number 1: ");
    scanf("%d",&number1);

    printf("Enter Number 2: ");
    scanf("%d",&number2);

    if (number1%2==1)
    {
        number1 = number1 + 1;
    }
    else
    {
        number1 = number1 + 2;
    }

    for(i=number1; i<number2; i=i+2)
    {
        result = result + i;
    }

    printf("%d",result);
    return 0;
}
