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
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int quickSelect(int array[],int n, int k)
{
    int position = k-1;
    return quickSelectHelper(array,0,n-1,position);
}
int quickSelectHelper(int array[], int startIdx, int endIdx, int position)
{
    while(1)
    {
        if(startIdx>endIdx)
        {
            printf("your algorithm should never arrive here");
        }
        int pivotIdex = startIdx;
        int leftIdex = startIdx+1;
        int rightIdx = endIdx;
        while(leftIdex<=rightIdx)
        {
            if(array[leftIdex]>array[pivotIdex] && array[rightIdx]<array[pivotIdex])
            {
                swap(array+leftIdex,array+rightIdx);
            }
            if(array[leftIdex]<=array[pivotIdex])
            {
                leftIdex++;
            }
            if(array[rightIdx]>=array[pivotIdex])
            {
                rightIdx--;
            }
        }
        swap(array+rightIdx,array+pivotIdex);
        if(rightIdx==position)        
            return array[rightIdx];
        else if(rightIdx<position)
            startIdx = rightIdx+1;
        else
            endIdx = rightIdx-1;
    }
}
int main()
{
    int n,k;
    system("clear");
    printf("Enter the number of elemnets: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    printf("Enter the value of k: ");
    scanf("%d",&k);
    
    // int a[]={8, 5, 2, 9, 7, 6, 3};
    // int n=7,k=3;
    // system("clear");

    // int a[]={3,2,3,1,2,4,5,5,6};
    // int n=9,k=4;
    // system("clear");
    printf("%d",quickSelect(a,n,k));

}