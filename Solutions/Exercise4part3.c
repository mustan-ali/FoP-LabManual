#include <stdio.h>
#include <conio.h>

int main()
{
    float m1,m2,m3,m4,m5,sum,percentage;

    printf("Enter m1: ");
    scanf("%f",&m1);
    printf("Enter m2: ");
    scanf("%f",&m2);
    printf("Enter m3: ");
    scanf("%f",&m3);
    printf("Enter m4: ");
    scanf("%f",&m4);
    printf("Enter m5: ");
    scanf("%f",&m5);

    sum=m1+m2+m3+m4+m5;
    percentage=(sum/500)*100;

    printf("Percentage= %1.2f",percentage);

    return 0;
}


