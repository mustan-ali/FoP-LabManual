#include<stdio.h>
#include<conio.h>

int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);

    if (number%2==0)
    {
        printf("%d is Even Number",number);
    }
    else
    {
        printf("%d is Odd Number",number);
    }

    return 0;
}


