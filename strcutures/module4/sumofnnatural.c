#include <stdio.h>
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n + sum(n-1));
    }

}
int main()
{
    int n;
    system("clear");
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("sum = %d",sum(n));
}