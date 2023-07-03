#include <stdio.h>
#include <math.h>
int checkPrime(int n)
{
    int flag = 0, i;
    for (i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return 1;
    else
        return 0;
}
void main()
{
    int n, i;
    printf("Enter the range:");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (checkPrime(i) == 1)
        {
            printf("%d\t", i);
        }
    }
}