#include <stdio.h>
#include <stdlib.h>
long int fact(int num)
{
    long long int f=1;
    for(int i=1;i<=num;i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    int n,r,ncr;
    system("clear");
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    ncr=fact(n)/((fact(n-r))*fact(r));
    printf("%dC%d = %d",n,r,ncr);

}