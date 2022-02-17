#include<stdio.h>
int main()
{
//Task 4
    int number1=5,number2=10,number3=15,*num1,*num2,*num3,max;
    num1=&number1;
    num2=&number2;
    num3=&number3;

    if(*num1 > *num2 && *num1 > *num3 ){
        max=*num1;
    }
    else if(*num2 > *num1 && *num2 > *num3){
        max=*num2;
    }
    else if(*num3 > *num1 && *num3 > *num2){
        max=*num3;
    }
    printf("Max: %d\n\n",max);

//Task 5
    int o,p,*n1,*n2;
    printf("Enter two numbers\n"),scanf("%d",&o),scanf("%d",&p);
    n1=&p;
    n2=&o;
    printf("Number 1: %d\n",*n1);
    printf("Number 2: %d\n\n",*n2);

//Task 6
    int x,y,*a,*b,ans;
    printf("Enter 2 Numbers\n"),scanf("%d %d", &x, &y);
    num1 = &x;
    num2 = &y;
    ans = *num1 / *num2;
    printf("ans = %d\n", ans);
    return 0;
}
