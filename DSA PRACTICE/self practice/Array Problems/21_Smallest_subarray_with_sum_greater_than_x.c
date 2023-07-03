#include <stdio.h>
#include <stdlib.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a[50],n,i,j,sum,keysum,c=0,count=0,b[20],k=0;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    readArray(a,n);
    printf("Enter the sum: ");
    scanf("%d",&keysum);
    here:
    for(i=c;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum+=a[j];
            count++;
            if(sum>keysum)
            {
                b[k]=count;
                k++;
                count=0;
                c++;
                goto here;
            }
        }
    }
    int min = b[0];
    for(i=0;i<k;i++)
    {
        if(min>b[i])
        {
            min=b[i];
        }
    }
    printf("%d",min);

}