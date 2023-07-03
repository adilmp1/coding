#include <stdio.h>
void main()
{
    int x, y, sum, *xp, *yp;
    printf("Enter value of x:");
    scanf("%d", &x);
    printf("Enter value of y:");
    scanf("%d", &y);
    xp = &x;
    yp = &y;
    sum = *xp + *yp;
    printf(" Sum is %d \n", sum);
}