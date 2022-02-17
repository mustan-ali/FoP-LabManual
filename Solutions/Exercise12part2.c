#include<stdio.h>
#include<string.h>

struct company
{
    char Name[20];
    char Address[20];
    int Phone;
    int NoOfEmployee;
};

int main()
{
    struct company member1;

    printf("Name: ");
    scanf("%s",&member1.Name);

    printf("Address: ");
    scanf("%s",&member1.Address);

    printf("Phone: ");
    scanf("%d",&member1.Phone);

    printf("NoOfEmployee: ");
    scanf("%d",&member1.NoOfEmployee);


    printf("\nName: %s\n",member1.Name);
    printf("Address: %s\n",member1.Address);
    printf("Phone: %d\n",member1.Phone);
    printf("NoOfEmployee: %d\n",member1.NoOfEmployee);

    return 0;
}

