#include<stdio.h>
#include<conio.h>

int main()
{
    int number1,number2,selection;

    printf("Enter Number 1 : ");scanf("%d",&number1);
    printf("Enter Number 2 : ");scanf("%d",&number2);

    printf(" 1 Addition\n 2 Subtraction\n 3 Multiplication\n 4 Division\n");
    printf("Select Operator Letter : ");
    scanf("%d",&selection);

    switch(selection)
    {
    case 1:
    {printf("Addition: %d",number1+number2);
        break;}
    case 2:
    {printf("Subtraction: %d",number1-number2);
        break;}
   case 3:
    {printf("Multiplication: %d",number1*number2);
        break;}
    case 4:
    {printf("Division: %0.2f",(float)number1/(float)number2);
        break;}
    default:
    {printf("Invalid Selection\n");}
    }
    return 0;
}


