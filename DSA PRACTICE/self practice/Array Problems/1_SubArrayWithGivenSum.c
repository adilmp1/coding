#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, n, sum, flag = 0,sume;
    int a[100];
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("What is the sum of elements: ");
    scanf("%d",&sume);
    sum = 0;
    int k = 0;

here:
    for (j = k; j < n; j++)
    {
        sum += a[j];
        if (sum == sume)
        {
            flag = 1;
            printf("%d %d",k+1,j+1);
            exit(0);
        }
    }
    if (flag == 0)
    {
        sum = 0;
        k++;
        goto here;
    }
}