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
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void quickSort(int a[], int n)
{
    quickSortHelper(a,0,n-1);
}
int quickSortHelper(int a[], int startIdx, int endIdx)
{
    int n = endIdx+1;
    if(startIdx>=endIdx)
        return;
    int pivotIdx, leftIdx, rightIdx, leftSub;
    pivotIdx = startIdx;
    leftIdx = startIdx+1;
    rightIdx = endIdx;
    while(rightIdx>=leftIdx)
    {
        if(a[leftIdx]>a[pivotIdx] && a[rightIdx]<a[pivotIdx])
        {
            swap(a+leftIdx,a+rightIdx);
        }
        if(a[leftIdx]<=a[pivotIdx])
        {
            leftIdx++;
        }
        if(a[rightIdx]>=a[pivotIdx])
        {
            rightIdx--;
        }
    }
    swap(a+pivotIdx,a+rightIdx);
    leftSub = rightIdx-1-startIdx<endIdx-(rightIdx+1);
    if(leftSub)
    {
        quickSortHelper(a,startIdx,rightIdx-1);
        quickSortHelper(a,rightIdx+1,endIdx);
    }
    else
    {
        quickSortHelper(a,rightIdx+1,endIdx);
        quickSortHelper(a,startIdx,rightIdx-1);
    }
}
int main()
{
    int n;
    system("clear");
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);

    // int a[] = {5,2,1,4,8};
    // int n=5;
    // system("clear");

    quickSort(a,n);
    printArray(a,n);
}