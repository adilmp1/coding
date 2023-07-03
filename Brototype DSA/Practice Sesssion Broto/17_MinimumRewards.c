#include <stdio.h>
#include <stdlib.h>
int max(int a, int b)
{
    return (a>b)?a:b;
}
int sum(int a[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
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
void minRewards(int a[], int n)
{
    int rewards[n],i;
    for(i=0;i<n;i++)
    {
        rewards[i]=1;
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            rewards[i]=rewards[i-1]+1;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]>a[i+1])
        {
            rewards[i] = max(rewards[i],rewards[i+1]+1);
        }
    }
    printf("%d",sum(rewards,n));
}
int main()
{
    int n;
    system("clear");
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);


    // int n=9;
    // int a[]={8, 4, 2, 1, 3, 6, 7, 9, 5};
    // system("clear");
    // 1 2 3 4 5 6 7 8 9

    // int n=3;
    // int a[]={1, 0, 2};
    // system("clear");

    // 0 1 2 

    // int n=10;
    // int a[]={1, 2, 3, 4, 5, 0, 9, 10, 11, 6};
    // system("clear");
    minRewards(a,n);
}