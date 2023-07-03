#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a[50],n,i,j,pro;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    readArray(a,n);
    for(i=0;i<n;i++)
    {
        pro=1;
        for(j=0;j<n;j++)
        {
            if(a[j]==a[i])
            {
                continue;
            }
            else
            {
                pro*=a[j];
            }
        }
        printf("%d\n",pro);
    }
}