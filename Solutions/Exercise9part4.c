#include<stdio.h>

int array[20],number,i,j;

int conversion(int d)
{
    for(i=0; number>0; i++)
    {
        array[i]=number%2;
        number=number/2;
    }

    printf("Binary: ");

    for(j=i; j>=0; j--)
    {
        printf("%d",array[j]);
    }

    return 0;
}
int main()
{
    printf("Enter Decimal: "),scanf("%d",&number);

    conversion(number);
    return 0;
}
