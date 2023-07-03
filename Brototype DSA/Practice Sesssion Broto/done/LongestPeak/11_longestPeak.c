#include <stdio.h>
void maxElement(int a[],int n)
{
    int i,large=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    printf("%d",large);
}
void readArray(int a[], int n)
{
    int i;
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void longPeak(int a[],int n)
{
    int i,j,count,k=0,flag=0;
    int c[n/2];
    for(i=1;i<n-1;i++)
    {
        count=1;
        if(a[i]>a[i-1] && a[i]>a[i+1])
        {
            flag=1;
            for(j=i;a[j]>a[j-1] && j>=0;j--)
            {
                count++;
            }
            // printf("%d\t",count);
            for(j=i;a[j]>a[j+1] && j<n-1;j++)
            {
                count++;
            }
            c[k]=count;
            k++;
        }
    }
    if(flag)
        maxElement(c,k);
    else
        printf("%d",-1);
}
int main()
{
    int n;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    longPeak(a,n);
}