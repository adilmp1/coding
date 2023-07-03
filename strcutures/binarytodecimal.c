#include <stdio.h>
int power(int a,int b)
{
    int i,poww=1;
    for(i=1;i<=b;i++)
    {
        poww=poww*a;
    }
    return poww;
}
int main()
{
    int bin,dec=0,i,e=0,dig;
    system("clear"); 
    printf("Enter the binary numebr: ");
    scanf("%d",&bin);
    for(i=bin;i!=0;i/=10);
    {
        dig=i%10;
        dec+=(dig*power(2,e));
        e++;
    }
    printf("Decimal = %d",dec);
}