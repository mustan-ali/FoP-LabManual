#include <stdio.h>
int main()
{

    int i=0,Total = 1,x=0;

    printf("0 ");

    while (i<14)
    {
        printf("%d ",Total);

        Total = Total + x;
        x=Total-x;

        i++;
    }

    return 0;
}


