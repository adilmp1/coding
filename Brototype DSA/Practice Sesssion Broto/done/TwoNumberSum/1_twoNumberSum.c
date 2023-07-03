#include <stdio.h>
#include <stdlib.h>
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
        printf("%d ",*(a+i));
    }
}
int* twoNumberSum(int arr_count, int* arr, int target,int* result_count) 
{
    int flag=0,i,j;
    *result_count=2;
    int * a2=(int *) calloc(2,sizeof(int));
    for(i=0;i<arr_count;i++)
    {
        for(j=i+1;j<arr_count;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                a2[0]=arr[i];
                a2[1]=arr[j];
                flag=1;
                break;
            }
        }
    }
    if(flag)
    {
        return a2;
    }
    else
        printf("%d",-1);
        
}
int main()
{
    int * result_array,arr[20],result_array_count,arr_count,i,j,target;
    system("clear");
    printf("Enter number of elements: ");
    scanf("%d",&arr_count);   
    readArray(arr,arr_count);
    printf("Enter the target: ");
    scanf("%d",&target);
    result_array = twoNumberSum(arr_count,arr,target,&result_array_count);
    printf("\n");
    printArray(result_array,result_array_count);
    
}