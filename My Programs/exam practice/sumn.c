#include <stdio.h>
#include <stdlib.h>
int sum(int n)
{
    if(n==1)
        return 1;
    else    
        return (n+sum(n-1));
}
int main()
{
    int a;
    system("clear");
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("%d",sum(a));
}