#include <stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
    float lenght,height,radius,perimeter,area;

    printf("Enter Height of Square: ");
    scanf("%f",&lenght);

    perimeter=lenght+lenght+lenght+lenght;
    area=lenght*lenght;
    printf("Perimeter of Square: %1.2f\n",perimeter);
    printf("Area of Square: %1.2f\n\n",area);

    printf("Enter Radius of Circle: ");
    scanf("%f",&radius);
    perimeter=2*M_PI*radius;
    area=M_PI*(radius*radius);
    printf("Perimeter of Circle: %1.2f\n",perimeter);
    printf("Area of Circle: %1.2f\n\n",area);

    printf("Enter Height of Triangle: ");
    scanf("%f",&height);
    printf("Enter Length of Triangle: ");
    scanf("%f",&lenght);
    perimeter=lenght+height+((lenght*lenght)+(height*height));
    area=0.5*(lenght*height);
    printf("Perimeter of Triangle: %1.2f\n",perimeter);
    printf("Area of Triangle: %1.2f\n",area);
    return 0;
}








