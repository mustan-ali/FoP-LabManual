#include<stdio.h>

struct student
{
    char Name[20];
    char Department[20];
    struct marks
    {
        int m1;
        int m2;
        int m3;
        int m4;
        int m5;
    } result;
};

int main()
{
    struct student s1;

    printf("Name: "),scanf("%s",&s1.Name);
    printf("Department: "),scanf("%s",&s1.Department);
    printf("Mark 1: "),scanf("%d",&s1.result.m1);
    printf("Mark 2: "),scanf("%d",&s1.result.m2);
    printf("Mark 3: "),scanf("%d",&s1.result.m3);
    printf("Mark 4: "),scanf("%d",&s1.result.m4);
    printf("Mark 5: "),scanf("%d",&s1.result.m5);

    printf("\nName: %s\n",s1.Name);
    printf("Department: %s\n",s1.Department);
    printf("Mark 1: %d\n",s1.result.m1);
    printf("Mark 2: %d\n",s1.result.m2);
    printf("Mark 3: %d\n",s1.result.m3);
    printf("Mark 4: %d\n",s1.result.m4);
    printf("Mark 5: %d\n",s1.result.m5);

    return 0;
}
