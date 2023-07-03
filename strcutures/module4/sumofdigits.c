#include <stdio.h>

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%10 + sum(n/10));
    }

}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("sum = %d",sum(n));
}