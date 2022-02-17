#include <stdio.h>

int main()
{
    char string[]="admiral general aladeen";
    char character='a',replace='A';
    int  i;

    printf("%s",string);

    for(i=0; string[i]; i++)
    {
        if(string[i]==character)
        {
            string[i]=replace;
        }
    }

    printf("\n%s",string);


    return 0;
}
