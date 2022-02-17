#include<stdio.h>
#include<conio.h>

int main()
{
    int time;
    printf("Enter Time: ");
    scanf("%d",&time);

    if (time>12)
    {
        printf("Good Morning");
    }
    else
    {
        printf("Good after Noon");
    }

    return 0;
}



