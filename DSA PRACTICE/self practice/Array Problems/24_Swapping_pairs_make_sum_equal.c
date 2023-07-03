#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    // int a[50],b[50];
    int a[50],b[50],a2[50],b2[50];
    int m,n,i,j,asum=0,bsum=0,count=0,cnt2=0,cnt1=0;
    system("clear");
    printf("Enter the number of elements in first array: ");
    scanf("%d",&m);
    readArray(a,m);
    printf("Enter the number of elements in second array: ");
    scanf("%d",&n);
    readArray(b,n);
    for(i=0;i<m;i++)
    {
        asum+=a[i];
    }

    for(i=0;i<n;i++)
    {
        bsum+=b[i];
    }
    bubblesort(a,m);
    bubblesort(b,n);
    j=0;
    for(i=0;i<m;i++)
    {
        if(a[i]!=a[i+1])
        {
            a2[j]=a[i];
            j++;
            cnt1++;
        }
    }
    j=0;
    for(i=0;i<n;i++)
    {
        if(b[i]!=b[i+1])
        {
            b2[j]=b[i];
            j++;
            cnt2++;
        }
    }
    if(asum<bsum)
    {
        for(i=0;i<n-cnt2;i++)
        {
            for(j=0;j<m-cnt1;j++)
            {
                if(bsum-a2[j]==asum+b2[i])
                {
                    count++;
                }
            }
        }
    }
    else
    {
        for(i=0;i<n-cnt2;i++)
        {
            for(j=0;j<m-cnt1;j++)
            {
                if(bsum-a2[j]==asum+b2[i])
                {
                    count++;
                }
            }
        }
    }

    printf("%d",count);
}