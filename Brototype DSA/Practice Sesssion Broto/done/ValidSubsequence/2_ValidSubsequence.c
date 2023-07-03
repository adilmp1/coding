#include <stdio.h>
#include <stdbool.h>
void readArray(int a[], int n)
{
    int i;
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int pos(int a[], int len,int key)
{
    int i,flag=0;
    for(i=0;i<len;i++)
    {
        if(a[i]==key)
        {
            flag=i;
            break;
        }
    }
    if(flag)
        return flag;
    else
        return -1;
}
bool validSubSequence(int arr_count, int* arr, int sequence_count, int* sequence)
{
    int i,flag=0;
    for(i=0;i<sequence_count;i++)
    {
        if(pos(sequence,sequence_count,sequence[i])<pos(sequence,sequence_count,sequence[i+1]) && pos(arr,arr_count,sequence[i])>pos(arr,arr_count,sequence[i+1]))
        {
            flag=1;
            break;
        }
        else if(pos(sequence,sequence_count,sequence[i])>pos(sequence,sequence_count,sequence[i+1]) && pos(arr,arr_count,sequence[i])<pos(arr,arr_count,sequence[i+1]))
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        return 0;
    }
    else
        return 1;
}
int main()
{
    int a[20],b[20],m,n;
    system("clear");
    printf("Enter the number of elements in the first array: ");
    scanf("%d",&m);
    readArray(a,m);
    printf("Enter the number of elements in the second array: ");
    scanf("%d",&n);
    readArray(b,n);
    printf("%d",validSubSequence(m,a,n,b));
}