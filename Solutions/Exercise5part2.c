#include<stdio.h>
#include<conio.h>

int main()
{
    int number1,number2,selection;

    printf("Enter Number 1 : ");
    scanf("%d",&number1);
    printf("Enter Number 2 : ");
    scanf("%d",&number2);

    printf("1 Addition\n");
    printf("2 Subtraction\n");
    printf("3 Multiplication\n");
    printf("4 Division\n");
    printf("Select Operator No. :");
    scanf("%d",&selection);

    if (selection==1)
    {printf("Addition: %d",number1+number2);}

    else if (selection==2)
    {printf("Subtraction: %d",number1-number2);}

    else if (selection==3)
    {printf("Multiplication: %d",number1*number2);}

    else if (selection==4)
    {if(number2==0)
        {printf("Zero not allowed");}
        else
        {printf("Division: %0.2f",(float)number1/(float)number2);}}

    return 0;
}

