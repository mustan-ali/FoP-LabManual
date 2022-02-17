#include<stdio.h>
int main()
{
//Task 2
    int array[5],i,j,temp;

    printf("Enter 5 numbers:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&array[i]);
    }
    for (i = 0; i < 5; ++i)
    {
        for (j = i + 1; j < 5; ++j)
        {
            if (array[i] > array[j])
            {
                temp =  array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("Array after Sorting: ");
    for (i = 0; i < 5; ++i)
    {
        printf("%d ", array[i]);

    }
    return 0;
}

