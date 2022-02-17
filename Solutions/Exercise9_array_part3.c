#include <stdio.h>
int main()
{
    int i,j,k,
    a[2][2]= {{2,1},{3,4}},b[2][2]= {{3,4},{5,1}},mul[2][2];

    for(i=0; i<=1; i++)
    {
        for(j=0; j<=1; j++)
        {
            for(k=0; k<=1; k++)
            {
                mul[i][j]+= a[i][k] * b[k][j];
            }
        }
    }

    printf("Multiply: \n");
    for(i=0; i<=1; i++)
    {
        for(j=0; j<=1; j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
