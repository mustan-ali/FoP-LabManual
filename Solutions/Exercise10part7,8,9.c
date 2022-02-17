#include<stdio.h>
int main(){
//Task 7
        int arr[5]={1,2,3,4,5};
        int *x[5],j;

        for (j=0;j<5;j++){
            x[j] = &arr[j];
        }
        for(j=0;j<5;j++){
            printf("Element %d Address %d\n",*x[j],&arr[j]);
        }

//Task 8
        int num1,num2,*n1,*n2;

        n1=&num1;
        n2=&num2;
        printf("\nEnter two numbers\n"),scanf("%d %d",&*n1,&*n2);
        printf("Number1 is: %d\nNumber2 is: %d\n",num1,num2);

//Task 9
        int array[10],num, i;
        int * ptr = array;

        printf("\nEnter 10 Numbers:\n");
        for (i = 0; i < 10; i++){
            scanf("%d", ptr);
            ptr++;
        }
        ptr = array;
        printf("Array: ");
        for (i = 0; i < 10; i++){
            printf("%d ", *ptr);
            ptr++;
        }
    return 0;
}

