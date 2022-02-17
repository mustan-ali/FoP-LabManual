#include <stdio.h>
int main()
{
    int i, j,
    a[2][2]= {{2,4},{6,8}},
    b[2][2]= {{1,2},{3,4}},
    sum[2][2];

    for (i = 0; i <=1; ++i)
        for (j = 0; j <=1; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }

    printf("Sum: \n");
    for (i = 0; i <=1; i++)
        for (j = 0; j <=1; j++)
        {
            printf("%d\t", sum[i][j]);
            if (j == 1)
            {
                printf("\n");
            }
        }

    return 0;
}

