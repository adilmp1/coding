#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
int npr(int a,int b)
{
    if(b<0 || b>a)
    {
        printf("npr cannot be calculated");
        exit(0);
    }
    int nr=fact(a)/fact(a-b);
    return nr;
}
int main()
{
    int n,r;
    system("clear");
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    printf("%dP%d = %d\n",n,r,npr(n,r));
}


