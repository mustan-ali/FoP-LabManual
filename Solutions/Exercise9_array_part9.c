#include <stdio.h>

int main()
{
    int i,j;
    int array[3][2] = {{2,4},{6,8},{10,12}};

    for ( int i = 0; i <3; i++ )
    {
        for ( int j = 0; j < 2; j++ )
        {
            printf("array [%d][%d]: %d\n", i,j, array[i][j]);
        }
    }
    printf("\nEnter Row Number: ");
    scanf("%d",&i);

    printf("Enter Column Number: ");
    scanf("%d",&j);

    printf("Element is %d\n",array[i][j]);

    return 0;
}
