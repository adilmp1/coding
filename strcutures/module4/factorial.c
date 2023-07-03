#include <stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return 1;
    else  
        return (n*fact(n-1));
    
}
int main()
{
    int n1;
    printf("Enter the number: ");
    scanf("%d",&n1);
    printf("%d",fact(n1));
}