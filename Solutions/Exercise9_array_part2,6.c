#include<stdio.h>
int main ()
{
    int n[9];
    int max=0,min=1000;
    printf("Enter 10 Element\n");
    scanf("%d",&n[1]);
    scanf("%d",&n[2]);
    scanf("%d",&n[3]);
    scanf("%d",&n[4]);
    scanf("%d",&n[5]);
    scanf("%d",&n[6]);
    scanf("%d",&n[7]);
    scanf("%d",&n[8]);
    scanf("%d",&n[9]);
    scanf("%d",&n[10]);

    for (int i=0; i<=4; i++ )
    {
        if(n[i]>max){
            max=n[i];
        }
        if (n[i]<min){
            min=n[i];
        }
    }
    printf("Max: %d\n",max);
    printf("Min: %d\n",min);
    return 0;
}

