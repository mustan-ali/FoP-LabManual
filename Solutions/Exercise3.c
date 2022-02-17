#include<stdio.h>
#include<ctype.h>
int main()
{
    int int_variable=4;
    const int const_variable=6;

    printf("int_variable= %d\n",int_variable);
    printf("const_variable= %d\n\n",const_variable);

    char name;
    printf("Enter Name: ");
    scanf("%s",&name);
    printf("Name: %c\n\n",tolower(name));

    int number1,number2,sum;
    printf("Enter Number 1: ");
    scanf("%d",&number1);
    printf("Enter Number 2: ");
    scanf("%d",&number2);

    sum=number1+number2;
    printf("Sum: %d\n",sum);
    return 0;
}
