#include <stdio.h>
#include <conio.h>

int main()
{
    float a,b,c;
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter c: ");
    scanf("%f",&c);

    printf("Multiply = %f\n",a*b*c);
    printf("Divide = %f\n",a/b/c);
    printf("Addition = %f\n",a+b+c);
    printf("Subtraction = %f\n",a-b-c);

    return 0;
}
