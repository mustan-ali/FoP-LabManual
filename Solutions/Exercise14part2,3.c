#include<stdio.h>

void main()
{
    FILE *f1;
    char c;

    printf("Write data to file: \n");

    f1 = fopen("test.txt","w");

    while((c=getchar())!='@')
        putc(c,f1);

    /*characters are stored into file until user type "@"*/

    fclose(f1);

    printf("\nRead data from file: \n");

    f1 = fopen("test.txt","r"); /*reads characters from file*/

    while((c=getc(f1))!=EOF)
        printf("%c",c);

    fclose(f1);
}
