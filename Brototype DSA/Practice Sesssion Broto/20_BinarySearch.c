#include <stdio.h>
void readArray(int a[], int n)
{
    int i;
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int main()
{
    int n,first,last,mid,key,flag=0;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    printf("Enter the search element: ");
    scanf("%d",&key);
    first=0;
    last=n-1;
    while(first<last)
    {
        mid=(first+last)/2;
        if(a[mid]==key)
        {
            printf("%d",mid);
            flag=1;
            break;
        }
        else if(a[mid]>key)
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
    }
    if(!flag)
    {
        printf("%d",-1);
    }
}