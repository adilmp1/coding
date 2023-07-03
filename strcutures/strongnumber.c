#include <stdio.h>
int main()
{
    int n, digit, sum = 0, i, fact, nc;
    system("clear");
    printf("Enter the number: ");
    scanf("%d", &n);
    nc = n;
    while (n != 0)
    {
        digit = n % 10;
        fact = 1;
        for (i = 1; i <= digit; i++)
        {
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }

    if (nc == sum)
    {
        printf("strong");
    }
    else
    {
        printf("not strong");
    }
}