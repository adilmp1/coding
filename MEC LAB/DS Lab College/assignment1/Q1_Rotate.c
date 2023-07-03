#include <stdio.h>
void rotate(int a[], int n, int ro, int cr)
{
    int i, b[cr], j = 0;
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
        for (i = 0; i < n; i++)
        {
            printf("%d\n", a[i]);
        }
    }
    else
    {
        for (i = n-cr; i < n; i++)
        {
            b[j] = a[i];
            j++;
        }
        for (i = n-1; i>=0; i--)
        {
            a[i]=a[i-cr];
        }
        j=0;
        i=0;
        while (i < cr)
        {
            a[i] = b[j];
            j++;
            i++;
        }
        for (i = 0; i < n; i++)
        {
            printf("%d\n", a[i]);
        }
    }
}
int main()
{
    int n, ro, cr;
    int a[6] = {2, 3, 4, 5, 6, 7};
    n = 6;
    ro = 2;
    cr = 2;
    system("clear");
    rotate(a, n, ro, cr);
}