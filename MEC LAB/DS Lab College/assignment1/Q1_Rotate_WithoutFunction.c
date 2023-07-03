#include <stdio.h>
int main()
{
    int a[50], n, ro = 1, cr, i, j = 0;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the number of rotations: ");
    scanf("%d", &cr);
    int b[cr];
    printf("Enter the rotating direction\n");
    printf("1 - left\n2 - right\n");
    scanf("%d", &ro);

    if (ro == 1)
    {
        for (i = 0; i < cr; i++)
        {
            b[i] = a[i];
        }
        for (i = 0; i < n - cr; i++)
        {
            a[i] = a[i + cr];
        }
        while (i < n)
        {
            a[i] = b[j];
            j++;
            i++;
        }
    }
    if (ro == 2)
    {
        for (i = n - cr; i < n; i++)
        {
            b[j] = a[i];
            j++;
        }
        for (i = n - 1; i >= 0; i--)
        {
            a[i] = a[i - cr];
        }
        j = 0;
        i = 0;  
        while (i < cr)
        {
            a[i] = b[j];
            j++;
            i++;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }
}