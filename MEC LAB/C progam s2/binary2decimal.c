#include <stdio.h>
#include <stdlib.h>
int power(int a,int b)
{
    int i;
    int f=1;
    for(int i=1;i<=b;i++)
    {
        f=f*a;
    }
    return f;
}
int bin(int n)
{
    int dec=0,i=0,dig;
    while(n!=0)
    {
        dig=n%10;
        dec+=dig*(power(2,i));
        i++;
        n/=10;
    }
    return dec;
}
int main()
{
    int n;
    system("clear");
    printf("Enter the number to be converted into decimal: ");
    scanf("%d",&n);
    printf("The decimal of the number %d = %d\n",n,bin(n));
    
    

}