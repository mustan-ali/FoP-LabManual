#include <stdio.h>
#include <stdio.h>
int main ()
{
    int Number,ReverseNumber = 0,Digits = 0,j = 1,x,i;

    printf ("Enter Number: ");
    scanf ("%d",&Number);

    x=Number;

    while (x != 0)  //Task 5(While Loop)
    {
        x = x / 10;
        Digits++;
    }

    x = Digits;

    for (i = 1; i <= Digits; i++)
    {
        ReverseNumber = Number/j % 10;
        printf ("%d",ReverseNumber);
        j = j * 10;
    }
    printf("\nDigits: %d",Digits);

    return 0;
}

