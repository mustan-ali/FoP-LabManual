#include<stdio.h>
int main()
{
    //Task 1
    int array[10],num,i,status;

    printf("Enter 10 numbers\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter number to search:");
    scanf("%d",&num);

    for(i=0; i<10; i++)
    {
        if(array[i] == num){
            status=1;
            break;
        }
        else{
            status=0;
        }
    }

    if(status == 1){
        printf("Number found at index %d\n",i);
    }
    else{
        printf("Number Not found");
    }

    return 0;
}

