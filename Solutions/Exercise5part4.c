#include<stdio.h>
#include<conio.h>

int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);

//Task 3
    if (number%2==0)
    {
        printf("%d is Even Number\n",number);
    }
    else
    {
        printf("%d is Odd Number\n",number);
    }
//Task 4
    if (number<0)
    {
        printf("%d is Negative Number\n",number);
    }
    else
    {
        printf("%d is Positive Number\n",number);
    }
    return 0;
}



