#include <stdio.h>
#include </home/adil/Documents/Coding/DSA PRACTICE/self practice/Array Problems/adi.h>
int main()
{
    int a[50],n,i,j;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    readArray(a,n-1);
    bubblesort(a,n-1);
    for(i=a[0],j=0;j<n-1;i++,j++)
    {
        if(a[j]!=i)
        {
            printf("%d\n",i);
        }
    }
}