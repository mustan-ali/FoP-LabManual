#include<stdio.h>
int main()
{
    int num,range,i;

    printf("Enter Number: ");
    scanf("%d",&num);

    printf("Enter Range: ");
    scanf("%d",&range);

    for(i=1; i<=range; i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}
