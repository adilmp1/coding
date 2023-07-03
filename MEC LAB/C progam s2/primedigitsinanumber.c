#include <stdio.h>
int main()
{
    int n,digit;
    printf("Enter a number: ");
    scanf("%d",&n);
    int copy=n;
    printf("prime digits are: \n");
    while(n!=0)
    {
        digit=n%10;
        if(digit==2 || digit==3 || digit==5 || digit==7)
        {
            printf("%d\n",digit);
        }
        n/=10;
    }
}
    