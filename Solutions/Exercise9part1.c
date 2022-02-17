#include<stdio.h>

int a,b,temp;
int swap(int a,int b)
{
    printf("Enter a: "),scanf("%d",&a);
    printf("Enter b: "),scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return a,b;
}

int main()
{
    printf(swap(a,b));
    return 0;
}


