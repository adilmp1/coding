#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int n,i,j,distance,b[50];
    int a[50]={1,1,2,2,2,1};
    n=6;
    system("clear");
    // printf("Enter the number of elements: ");
    // scanf("%d",&n);
    // readArray(a,n);
    int k=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                distance = j-i;
                b[k]=distance;
                k++;
            }
        }
    }
    printArray(b,k);
}