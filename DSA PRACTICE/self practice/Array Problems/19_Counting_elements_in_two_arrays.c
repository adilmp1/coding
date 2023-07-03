#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a[50],b[50],m,n,i,j,count;
    system("clear");
    printf("Enter the number of elements in first array: ");
    scanf("%d",&m);
    readArray(a,m);
    printf("Enter the number of elements in second array: ");
    scanf("%d",&n);
    readArray(b,n);
    for(i=0;i<m;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(b[j]<=a[i])
            {
                count++;
            }
        }
        printf("%d\t",count);
    }
}