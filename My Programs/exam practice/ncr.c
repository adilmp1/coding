#include <stdio.h>
int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    else    
        return (n*fact(n-1));
}

int main()
{   
    int n,r,ncr;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    ncr=fact(n)/(fact(n-r)*fact(r));
    printf("ncr = %d",ncr);
}