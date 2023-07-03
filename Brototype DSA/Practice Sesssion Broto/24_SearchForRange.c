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
void searchForRange(int a[],int n, int target)
{
    int first,last,mid,flag=0,c[2];
    first=0,last=n-1;
    while(first<last)
    {
        mid=(first+last)/2;
        if(a[mid]==target)
        {
            flag=1;
            int copy=mid;
            while(a[mid]==target)
            {
                mid--;
            }
            c[0]=mid+1;
            mid=copy;
            while(a[mid]==target)
            {
                mid++;
            }
            c[1]=mid-1;
            break;
        }
        else if(a[mid]>target)
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
    }
    c[1]=mid-1;
    if(flag)    
        printf("[%d,%d]",c[0],c[1]);
    else
        printf("[-1,-1]");
}
int main()
{
    int n,target;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    printf("Enter the target: ");
    scanf("%d",&target);

    // int a[]={0, 1, 21, 33, 45, 45, 45, 45, 45, 45, 61, 71, 73};
    // int n=13, target=45;
    // system("clear");

    // int a[]={5, 7, 7, 8, 8, 10};
    // int n=6, target=8;
    // system("clear");

    // int a[]={5, 7, 7, 8, 8, 10};
    // int n=6, target=9;
    // system("clear");

    searchForRange(a,n,target);
}