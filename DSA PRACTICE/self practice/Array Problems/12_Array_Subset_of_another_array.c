#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a1[50],a2[50],m,n,i,j,flag;
    system("clear");
    printf("Enter the number of elements in first array: ");
    scanf("%d",&m);
    readArray(a1,m);
    printf("Enter the number of elements in second array: ");
    scanf("%d",&n);
    readArray(a2,n);
    for(j=0;j<n;j++)
    {
        flag=0;
        for(i=0;i<m;i++)
        {
            if(a2[j]==a1[i])
            {
                flag=1;
                goto here;
            }
        }
        here:
    }

    if(flag==0)
    {
        printf("Not a subset");
    }
    else   
    {
        printf("a2 is subset of a1");
    }
}