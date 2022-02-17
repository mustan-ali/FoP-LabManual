#include<stdio.h>

struct employee
{
    char name[20];
    char postion[20];
    int salary;
};

int main()
{
    struct employee eArray[3];
    int i;
    for(i=0; i<2; i++)
    {
        printf("Employee: %d\n",i+1);

        printf("Name: ");
        scanf("%s",&eArray[i].name);

        printf("Postion: ");
        scanf("%s",&eArray[i].postion);

        printf("Salary: ");
        scanf("%d",&eArray[i].salary);
        printf("\n");
    }

    for(i=0; i<2; i++)
    {
        printf("\nEmployee: %d\n",i+1);
        printf("Name: %s\n",eArray[i].name);
        printf("Postion: %s\n",eArray[i].postion);
        printf("Salary: %d\n",eArray[i].salary);
    }
    return 0;
}

