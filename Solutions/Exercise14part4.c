#include<stdio.h>

main()
{
    FILE *fp;
    int age;
    float height;
    char name[20],filename[10];

    printf("Enter filename: ");
    gets(filename);
    fp=fopen(filename,"w");

    printf("Enter Name, Age, Height:\n");

    fscanf(stdin,"%s %d %f",&name,&age,&height);
    fprintf(fp,"%s %d %f",&name,age,height);

    fclose(fp);

    fprintf(stdout,"\n\n");
    fp=fopen(filename,"r");

    printf("Name\t Age\t Height\t\n");

    fscanf(fp,"%s %d %f",name,&age,&height);
    fprintf(stdout,"%s\t%d\t%f\t\n",name,age,height);

    fclose(fp);
}
