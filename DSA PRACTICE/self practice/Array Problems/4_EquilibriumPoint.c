#include <stdio.h>
#include <stdlib.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a[50],n,s1=0,s2=0,i,j;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    readArray(a,n);
    for(i=0;i<n;i++)
    {   
        for(j=n-1;j>=0;j--)
        {
            s1+=a[i];
            s2+=a[j];
            if(s1==s2)
            {
                printf("Eq Point = %d",i+1);
                exit(0);
            }
        }
    }

}