#include<stdio.h>


int main()
{
    int i,n,factorial=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        factorial=i*factorial;
    }

    printf("%d",factorial);

    return 0;

}
