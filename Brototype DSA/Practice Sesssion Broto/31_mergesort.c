#include <stdio.h>
// Read Array 
int mergeSortHelper(int mainArray[], int startIdx, int endIdx, int auxiliaryArray[]);
void doMerge(int mainArray[], int startIdx, int middleIdx, int endIdx, int auxiliaryArray[]);
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
int mergeSort(int a[], int n)
{
    int i;
    if(n<=1)
        return 0;
    int auxiliaryArray[n];
    for(i=0;i<n;i++)
    {
        auxiliaryArray[i]=a[i];
    }
    mergeSortHelper(a,0,n-1,auxiliaryArray);
}

int mergeSortHelper(int mainArray[], int startIdx, int endIdx, int auxiliaryArray[])
{
    if(startIdx==endIdx)
        return 0;
    int middleIdx;
    middleIdx = (startIdx+endIdx)/2;
    mergeSortHelper(auxiliaryArray,startIdx,middleIdx,mainArray);
    mergeSortHelper(auxiliaryArray,middleIdx+1,endIdx,mainArray);
    doMerge(mainArray,startIdx,middleIdx,endIdx,auxiliaryArray);
}
void doMerge(int mainArray[], int startIdx, int middleIdx, int endIdx, int auxiliaryArray[])
{
    int k,i,j;
    k=startIdx;
    i=startIdx;
    j=middleIdx+1;
    while(i<=middleIdx && j<=endIdx)
    {
        if(auxiliaryArray[i]<=auxiliaryArray[j])
        {
            mainArray[k]=auxiliaryArray[i];
            i++;
        }
        else
        {
            mainArray[k]=auxiliaryArray[j];
            j++;
        }
        k++;
    }
    while(i<=middleIdx)
    {
        mainArray[k] = auxiliaryArray[i];
        i++;
        k++;
    }
    while(j<=endIdx)
    {
        mainArray[k] = auxiliaryArray[j];
        j++;
        k++;
    }
}
int main()
{
    // int n;
    // system("clear");
    // printf("Enter number of elements: ");
    // scanf("%d",&n);
    // int a[n];
    // readArray(a,n);
    
    int a[] = {12, 31, 25, 8, 32, 17, 40, 42 };
    int n=8;

    mergeSort(a,n);
    printArray(a,n);
}