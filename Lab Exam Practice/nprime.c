#include <stdio.h>
#include <stdlib.h>
int prime(int n)
{
    int i;
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
            break;
        }
    }
}
int main()
{
    int q,i;
    system("clear");
    printf("Enter number of prime numbers: ");
    scanf("%d",&q);
    for(i=1;i<=q;i++)
    {
        if(prime(i)!=0)
            printf("%d\n",i);
    }
}