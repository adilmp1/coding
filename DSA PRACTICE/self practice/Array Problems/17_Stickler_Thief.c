#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a[50],n,i,j,s1=0,s2=0;
    system("clear");
    printf("Enter the number of houses: ");
    scanf("%d",&n);
    printf("\nEnter the money in each houses: \n");
    readArray(a,n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1+=a[i];
        }
        else
        {
            s2+=a[i];
        }
    }
    if(s1>s2)
    {
        printf("%d",s1);
    }
    else
    {
        printf("%d",s2);
    }
}