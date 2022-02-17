#include<stdio.h>

int main()
{
    int a[3]= {5,10,15,20},num,index;

    printf("Enter Number: ");
    scanf("%d",&num);

    for(int i=0; i<=3; i++)
    {
        if (num==a[i]){
            printf("Index: %d\n",i);
        }
    }

    printf("Enter Index to delete: "),scanf("%d",&index);
    for(int i=0; i<=4; i++)
    {
        if (i==index){
            a[i]=0;
        }
    }
    printf("Element of index %d is %d",index,a[index]);
    return 0;
}
