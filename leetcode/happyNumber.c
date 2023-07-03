#include <stdio.h>
#include <stdbool.h>
bool isHappy(int n)
{
    int digit,rev,sum;
    int n2;
    while(n/10!=0)
    {
        n2=n;
        sum=0;
        while(n2!=0)
        {
            digit=n2%10;
            sum+=digit*digit;
            n2/=10;
        }
        n=sum;
    }
    if(n==1)
    {
        return true;
    }
    return false;
}
int main()
{
    
}