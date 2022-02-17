#include<stdio.h>
#include<conio.h>

int main()
{
    float m1,m2,m3,m4,m5,percentage;

    printf("Enter Mark 1 : ");
    scanf("%f",&m1);
    printf("Enter Mark 2 : ");
    scanf("%f",&m2);
    printf("Enter Mark 3 : ");
    scanf("%f",&m3);
    printf("Enter Mark 4 : ");
    scanf("%f",&m4);
    printf("Enter Mark 5 : ");
    scanf("%f",&m5);

    percentage=((m1+m2+m3+m4+m5)/500)*100;
    printf("Percentage : %0.2f\n",percentage);

    if(percentage>=95 && percentage <=100)
    {printf("Grade : A+");}
    else if(percentage>=85 && percentage <95)
    {printf("Grade : A");}
    else if(percentage>=75 && percentage <85)
    {printf("Grade : B+");}
    else if(percentage>=65 && percentage <75)
    {printf("Grade : B");}
    else if(percentage>=55 && percentage <65)
    {printf("Grade : C+");}
    else
    {printf("Grade : Fail");}

    return 0;
}

