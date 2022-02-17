#include<stdio.h>
int main()
{
    int O1[8]= {0,1,2,3,4,5,6,7},O2[8]= {1,3,5,7,9,2,4,6},temp;

    printf("After changing odd position : ");
    for(int j=1; j<8; j++){
        O2[j+1]=O1[j];
        j++;
    }
    for(int j=0; j<8; j++){
        printf("%d ",O2[j]);
    }

    for(int j=0; j<8; j++){
        if(O2[j]>5){
            O2[j]=0;
        }
    }

    printf("\nAfter replacing '0': ");
    for(int j=0; j<8; j++){
        printf("%d ",O2[j]);
    }

    for(int i=0; i<=7; i++){
        for(int j=0; j<=7-i; j++){
            if(O2[j]>O2[j+1]){
                temp=O2[j];
                O2[j]=O2[j+1];
                O2[j+1]=temp;
            }
        }
    }
    printf("\n\nAfter sorting: ");
    for(int j=0; j<8; j++){
        printf("%d ",O2[j]);
    }
    return 0;
}

