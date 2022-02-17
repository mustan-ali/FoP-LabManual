#include<stdio.h>
int main()
{
    int length,width,height,volume,surface_area;

    printf("Enter Length: ");
    scanf("%d",&length);

    printf("Enter Width: ");
    scanf("%d",&width);

    printf("Enter Height: ");
    scanf("%d",&height);

    volume=length*width*height;
    surface_area= 2*(height*width) + 2*(height*length) + 2*(width*length);

    printf("Volume is %d\n",volume);
    printf("Surface Area is %d\n",surface_area);

    return 0;
}
