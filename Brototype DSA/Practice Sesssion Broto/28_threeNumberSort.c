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
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void threeNumberSort(int a[],int n, int order[])
{
    int firstValue, secondValue, firstIdx, secondIdx, thirdIdx,value;

    firstValue = order[0];
    secondValue = order[1];
    firstIdx = 0;
    secondIdx = 0;
    thirdIdx = n-1;

    while(secondIdx<=thirdIdx)
    {
        value = a[secondIdx];

        if(value==firstValue)
        {
            swap(a+secondIdx,a+firstIdx);
            firstIdx++;
            secondIdx++;
        }
        else if(value==secondValue)
        {
            secondIdx++;
        }
        else
        {
            swap(a+secondIdx,a+thirdIdx);
            thirdIdx--;
        }
    }
    printArray(a,n);
}   
int main()
{
    int order[] = {0,1,-1};

    int n;
    system("clear");
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    
    // int a[]={1,0,0,0,1,1};
    // int n=6;
    // system("clear");


    // int a[]={1,0,0,-1,-1,0,1,1};
    // int n=8;
    // system("clear");

    threeNumberSort(a,n,order);
}