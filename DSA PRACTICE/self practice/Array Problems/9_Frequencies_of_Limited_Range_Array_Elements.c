#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a[50],n,i,j,b;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    readArray(a,n);
    for(i=0;i<n;i++)
    {
        b=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==i+1)
            {
                b++;
            }
        }
            printf("%d\n",b);
    }
}