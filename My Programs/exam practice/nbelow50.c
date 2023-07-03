#include <stdio.h>
#include <stdlib.h>
int num(int n)
{
    if(n>1)
        num(n-1);
    printf("%d\n",n);


}
int main()
{
    int a;
    system("clear");
    printf("Enter the number: ");
    scanf("%d", &a);
    num(a);
}