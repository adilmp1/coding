#include <stdio.h>
#include <stdlib.h>
void readArray(int a[], int n)
{
    int i;
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int firstDuplicate(int a[], int n)
{
    int i, absValue;
    for(i=0;i<n;i++)
    {
        absValue=abs(a[i]);
        if(a[absValue-1]<0)
        {
            return absValue;
        }
        a[absValue-1]*=-1;
    }
    return -1;
}
int main()
{
    int n;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    printf("%d",firstDuplicate(a,n));
}