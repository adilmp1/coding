#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a[50],n,i,j,b[50],count=0,c;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    readArray(a,n);
    for(i=0,j=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            b[j]=a[i];
            j++;
        }
    }

    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            b[j]=a[i];
            j++;
        }
    }

    printArray(b,n);
}