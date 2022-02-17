#include<stdio.h>
#include <math.h>


int factorial(int number)
{
    if (number <= 1)
        return 1;
    else
        return number*factorial(number-1);
}
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    printf("Factorial: %d",factorial(number));

    return 0;
}







