#include <stdio.h>
int main()
{
    float xc,xp,yc,yp,area;
    printf("Enter center coordinates: ");
    scanf("%f%f",&xc,&yc);
    printf("Enter point coordinates: ");
    scanf("%f%f",&xp,&yp);
    area=3.14*((xp-xc)*(xp-xc)+(yp-yc)*(yp-yc));
    printf("Area of circle = %f",area);
    return 0;
}