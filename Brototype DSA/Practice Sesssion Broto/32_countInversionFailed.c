#include <stdio.h>
int countInversions(int a[], int n)
{
    return countSubArrayInversions(a,0,n);
}
int countSubArrayInversions(int a[],int start,int end)
{
    if(end-start <=1)
        return 0;
    int middle, leftInversions, rightInversions, mergedArrayInversions;
    middle = start + (end-start)/2;
    leftInversions = countSubArrayInversions(a,start,middle);
    rightInversions = countSubArrayInversions(a,middle,end);
    mergedArrayInversions = msaci(a,start,middle,end);
    return leftInversions+rightInversions+mergedArrayInversions;s
}

int msaci(int a[], int start, int middle, int end)
{
    int n=end,i=0;
    int sortedArray[n];
    int left,right,inversions;
    left = start;
    right = middle;
    inversions = 0;

    while(left<middle && right <end)
    {
        if(a[left]<=a[right])
        {
            sortedArray[i++]=a[left];
            left++;
        }
        else
        {
            inversions+=middle-left;
            sortedArray[i++]=a[right];
            right++;
        }
    }
    
}
int main()
{
    int a[] = {1,2,3};
    int n=3;
    int countInversions(a,n);
}