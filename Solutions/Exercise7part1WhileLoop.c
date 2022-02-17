#include <stdio.h>
int main()
{
    int number=1,i=0;

    printf("%d ",number);

    while(i<4)
    {
        number=number*7;
        printf("%d ",number);
        i++;
    }

    return 0;
}

