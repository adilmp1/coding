#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,*xp,*yp,sum;
    system("clear");
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    xp=&x;
    yp=&y;
    sum=*xp+*yp;
    printf("Sum=%d",sum);

}