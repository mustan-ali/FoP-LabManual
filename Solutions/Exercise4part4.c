#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b;
    printf("Enter num1: ");
    scanf("%d",&a);

    printf("Enter num2: ");
    scanf("%d",&b);

    printf("num1:%d\n",(a+b)-a);
    printf("num2:%d\n",(a+b)-b);

    return 0;
}



