#include <stdio.h>
int linearSearch(int a[], int size, int element)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(a[i]==element)
        {
            return i;
        }
    }
    return -1;
}
int binarySearch(int a[], int size, int element)
{
    int low, mid, high;
    low=0;
    high = size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==element)
        {
            return mid;
        }

        if(a[mid]>element)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }

    }
}
int main()
{   
    int a[]={1,2,3,4,5,6,7,8};
    int size = sizeof(a)/sizeof(int);
    int searchIndex = binarySearch(a,size,4);
    printf("%d",searchIndex);
    return 0;
}   