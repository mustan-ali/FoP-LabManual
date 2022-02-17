#include <stdio.h>

int main()
{
    int a[5]= {1,2,3,4,5};
    int r[5];
    int i,j=0;
    for(i=4; i>=0; i--)
    {
        r[j]=a[i];
        j++;
    }

     for(i=0; i<=4; i++)
    {
        printf("%d ",r[i]);
    }

    return 0;
}
