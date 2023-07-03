#include <stdio.h>
void bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int i,n=10,sum,j,count,cnt[10],large,modpos;
    float mean, median;
    int a[]={1,2,3,5,4,5,6,3,1,1};
    system("clear");
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    mean = (float) sum/n;
    printf("mean = %f",mean);
    bubblesort(a,n);
    if(n%2==0)
    {
        median = (a[(n/2)]+a[(n/2)+1])/2;
    }
    else
    {
        median = a[(n+1)/2];
    }
    printf("\nmedian = %f",median);
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        cnt[i]=count;
    }
    large=a[0];
    for(i=0;i<n;i++)
    {
        if(large<cnt[i])
        {
            large=cnt[i];
            modpos=i;
        }
    }
    printf("\nMode = %d",a[modpos]);
}