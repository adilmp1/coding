#include <stdio.h>
int main()
{
    int n,digit,sum=0;
    system("clear");
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    printf("Sum = %d",sum);
}