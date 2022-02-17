#include<stdio.h>
int main()
{
    int one[10]= {0,3,4,5,8,6,9,1,7,2},n1,n2,num1,num2,temp,i,j,deleteIndex;

    printf("Enter number1: "),scanf("%d",&num1);
    printf("Enter number2: "),scanf("%d",&num2);

    for(i=0; i<10; i++)
    {
        if(one[i] == num1)
        {
            n1=i;
        }
        else if(one[i] == num2)
        {
            n2=i;
        }
    }

    temp =  one[n1];
    one[n1] = one[n2];
    one[n2] = temp;

    printf("Array after Searching & Swapping: ");
    for(i=0; i<10; i++)
    {
        printf("%d ", one[i]);
    }

    printf("\n\nEnter index to delete: "),scanf("%d",&deleteIndex);
    for(i=deleteIndex; i<9; i++)
    {
        one[i] = one[i + 1];
    }
    printf("Array after Deleting: ");
    for(i=0; i<9; i++)
    {
        printf("%d ", one[i]);
    }

    for (int c = 9; c >= n1+3; c--)
    {
        one[c+1] = one[c];
    }
    one[n1+3] = 10;

    printf("\n\nArray after Inserting Element: ");
    for(i=0; i<10; i++)
    {
        printf("%d ", one[i]);
    }

    for(i=0; i<=10; i++)
    {
        for(j=0; j<=10-i; j++)
        {
            if(one[j]>one[j+1])
            {
                temp=one[j];
                one[j]=one[j+1];
                one[j+1]=temp;
            }
        }
    }
    printf("\n\nData after sorting: ");
    for(j=0; j<10; j++)
    {
        printf("%d ",one[j]);
    }

    printf("\n");
    return 0;
}
