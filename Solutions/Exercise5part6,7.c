#include<stdio.h>
#include<conio.h>

int main()
{
//Task 6
    int time;
    printf("Enter Time: ");
    scanf("%d",&time);

    if (time>12)
    {
        printf("Good Morning\n");
    }
    else
    {
        printf("Good after Noon\n");
    }
//Task 7
    int age;
    printf("Enter Age: ");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("You can Vote");
    }
    else
    {
        printf("You cannot vote");
    }

    return 0;
}



