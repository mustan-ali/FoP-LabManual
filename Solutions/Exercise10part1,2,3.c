#include<stdio.h>

int main()
{
    //Task 1
    int a;
    char b[10];
    printf("Address of a variable: %d\n",&a);
    printf("Address of b variable: %d\n\n",&b[1]);

    //Task 2
        int *vPtr,array[2],x = 5;

        vPtr = &x;
        printf("Statement 1: %d\n", *vPtr);

       *vPtr = &array[0];
        printf("Statement 2: %d\n\n", *vPtr);

    //Task 3
    int number1,number2,*num1,*num2,sum;

    printf("Enter 2 Numbers\n"),scanf("%d %d", &number1, &number2);

    num1 = &number1;
    num2 = &number2;
    sum = *num1 + *num2;
    printf("Sum of the numbers = %d\n", sum);

    return 0;
}
