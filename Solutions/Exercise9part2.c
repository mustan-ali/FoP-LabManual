#include<stdio.h>
#include <math.h>

int main()
{
    int result,a,b;
    printf("Enter Number: "),scanf("%d",&a);
    printf("Enter Power: "),scanf("%d",&b);

    result=pow(a,b);
    printf("%d",result);

    return 0;
}




