#include <stdio.h>
#include <stdbool.h>
void readArray(int a[], int n)
{
    int i;
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
bool isMonotonic(int *a, int n)
{
    int i=0;
    if (n == 1)
        return 1;
    while(a[i]==a[i+1])
    {
        i++;
    }
    if (a[0] > a[i])
    {
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                return 0;
            }
        }
    }
    else if (a[0] < a[1])
    {
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int n, result;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    readArray(a, n);
    printf("%d", isMonotonic(a, n));
}