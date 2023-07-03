#include <stdio.h>
int fib(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    else
        return fib(n - 2) + fib(n - 1);
}
int main()
{
    int n, i;
    system("clear");
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",fib(i));
    }

}