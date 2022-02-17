#include<stdio.h>

int main ()
{
    int sum=0,product=1;
    int array[5];

    printf("Enter 5 Element of Array\n");
    for (int i=0; i<=4; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int j=0; j<=4; j++)
    {
        sum=sum+array[j];
        product=product*array[j];
    }

    printf("Sum: %d\n",sum);
    printf("Product: %d\n",product);

    return 0;
}
