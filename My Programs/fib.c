#include <stdio.h>
#include <stdlib.h>
int fib(int n)
{
    int a,b,i;
    if(n==0)
        return 0;
    if(n==1)
        return 1;
     
    for(i=1;i<=n;i++)
    {
        return (fib(n-1)+fib(n-2));
    }
}
int main()
{
    int n;
    system("clear");
    printf("Enter number of terms in the series: ");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++)
    {
        printf("%d\t",fib(i));
    }
    return 0;
}
