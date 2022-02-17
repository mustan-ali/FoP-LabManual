#include <stdio.h>
int main ()
{
    float Number1, Number2, Answer;
    char character;

    do
    {
        printf("Enter Number 1: "),scanf("%f",&Number1);
        printf("Enter Number 2: "),scanf("%f",&Number2);

        Answer=Number1/Number2;
        printf("Answer = %1.2f\n",Answer);

        printf("Press C to continue & E to Exit: ");
        scanf("%s",&character);
        printf("\n");
    }
    while(character=='c' || character=='C');

    return 0;
}
