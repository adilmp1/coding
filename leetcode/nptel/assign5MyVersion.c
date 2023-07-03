#include <stdio.h>
int main()
{
    int n, i, j, MaxDifference = 0;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the list:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] - a[i] > MaxDifference)
            {
                MaxDifference = a[j] - a[i];
            }
        }
    }
    printf("The maximum difference between two elements in the list is: %d\n", MaxDifference);
    return 0;
}
