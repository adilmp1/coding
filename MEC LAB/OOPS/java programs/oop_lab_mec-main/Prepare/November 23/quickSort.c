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
void printArray(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int partition(int a[],int lb, int ub);
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void quickSort(int a[],int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
        loc = partition(a,lb,ub);
        quickSort(a,lb,loc-1);
        quickSort(a,loc+1,ub);
    }
}
int partition(int a[],int lb, int ub)
{
    int pivote, start,end;
    pivote = a[lb];
    start = lb;
    end = ub;
    while(start<end)
    {
        while(a[start]<=pivote)
        {
            start++;
        }
        while(a[end]>pivote)
        {
            end--;
        }
        if(start<end)
        {
            swap(a+start,a+end);
        }
    }
    swap(a+lb,a+end);
    return end;
}
int main()
{
    int n;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    quickSort(a,0,n-1);
    printArray(a,n);

    // int a[]={7,6,11,16,3,4};
    // int lb=0;
    // int ub=5;
}