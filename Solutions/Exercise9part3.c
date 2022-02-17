#include<stdio.h>
#include<conio.h>

int powercalculator(int x, int y)
{
    int num = 1;

    for (int i = 1; i <= y; i++){
        num = num*x;
    }
    return(num);
}

int main()
{
    int a,b,answer;

    printf("Enter Number: "),scanf("%d",&a);
    printf("Enter Power: "),scanf("%d",&b);

    answer=powercalculator(a,b);
    printf("Answer: %d",answer);
    return 0;
}


