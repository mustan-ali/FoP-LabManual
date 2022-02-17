#include <stdio.h>
int main()
{
    int number[6];
    int i,TotalEvenNumber=0,TotalOddNumber=0,TotalNegativeNumber=0;

    printf("Enter 6 Number:\n");

    for (i=1; i<=6; i++)
    {
        scanf("%d",&number[i]);
        if(number[i]<0)
        {
            TotalNegativeNumber++;
        }
        else if (number[i]%2==1)
        {
            TotalOddNumber++;
        }
        else if(number[i]%2==0)
        {
            TotalEvenNumber++;
        }
    }

    printf("Total Odd Number %d\n",TotalOddNumber);
    printf("Total Even Number: %d\n",TotalEvenNumber);
    printf("Total Negative Number %d",TotalNegativeNumber);

    return 0;
}

