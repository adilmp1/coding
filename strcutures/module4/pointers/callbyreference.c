#include <stdio.h>
int swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x,y;
    system("clear");
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);
    printf("Before swapping \n");
    printf("x = %d, y = %d\n\n",x,y);
    swap(&x,&y);
    printf("After swapping \n");
    printf("x = %d, y = %d",x,y);
}