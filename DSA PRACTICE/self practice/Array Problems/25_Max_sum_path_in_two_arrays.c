#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a[50], b[50], m, n, i, j, sum = 0, key;
    system("clear");
    printf("Enter the number of elements in first array: ");
    scanf("%d", &m);
    readArray(a, m);
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n);
    readArray(b, n);
    if (a[0] > b[0])
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (b[j] == a[i])
                {
                    key = a[i];
                }
            }
        }
        j = 0;
        while (b[j] != key)
        {
            sum += b[j];
            j++;
        }
        i = 0;
        while (a[i] != key)
        {
            i++;
        }
        while (i != m)
        {
            sum += a[i];
            i++;
        }
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (b[j] == a[i])
                {
                    key = a[i];
                }
            }
        }
        j = 0;
        while (a[j] != key)
        {
            sum += a[j];
            j++;
        }
        i = 0;
        while (b[i] != key)
        {
            i++;
        }
        while (i != m)
        {
            sum += b[i];
            i++;
        }
    }
    printf("%d", sum);
}