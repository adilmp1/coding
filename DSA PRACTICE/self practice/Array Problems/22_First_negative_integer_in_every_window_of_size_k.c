#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a[50],n,i,j,window,flag,c;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    readArray(a,n);
    printf("Enter window range: ");
    scanf("%d",&window);
    for(i=0;i<n-window+1;i++)
    {
        flag=0;
        for(j=i;j<i+window;j++)
        {
            if(a[j]<0)
            {
                printf("%d\n",a[j]);
                flag=1;
                goto here;
            }
        }
            if(flag==0)
            {
                printf("0\n");
            }
        here:
    }
}