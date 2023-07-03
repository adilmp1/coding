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
int shiftedBinarySearchHelper(int array[], int target,int left, int right)
{
    int middle, potentialMarch, leftNum, rightNum;
    while(left<=right)
    {
        middle=(left+right)/2;
        potentialMarch=array[middle];
        leftNum=array[left];
        rightNum=array[right];
        if(target==potentialMarch)
            return middle;
        else if(leftNum<=potentialMarch)
        {
            if(target<potentialMarch && target>=leftNum)
                right=middle-1;
            else
                left=middle+1;
        }
        else
        {
            if(target>potentialMarch && target<=rightNum)
                left=middle+1;
            else
                right=middle-1;
        }
    }
    return -1;
}
int shiftedBinarySearch(int array[],int n,int target)
{
    return shiftedBinarySearchHelper(array,target,0,n-1);
}

int main()
{
    int n,target;
    system("clear");
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    printf("Enter the target: ");
    scanf("%d",&target);

    // int a[]={4,5,6,7,0,1,2};
    // int n=7,target=7;
    // system("clear");


    printf("%d",shiftedBinarySearch(a,n,target));
}