#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a[50],n, i, j, sum, large=0;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    readArray(a,n);
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = i + 1; j < n; j++)
        {
            sum += a[j];
            if (!sum)
            {
                if(large<(j-i))
                {
                    large=j-i;
                }
            }
        }
    }
    printf("%d",large);
}