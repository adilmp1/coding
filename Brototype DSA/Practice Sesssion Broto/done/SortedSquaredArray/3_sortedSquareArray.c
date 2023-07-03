#include <stdio.h>
void printArray(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void sort(int a[],int n,int b[])
{
    int *first,*last;
    first=a;
    last=a+n-1;
    int c=n-1;
    while(c!=-1)
    {
        if((*first)*(*first) > (*last)*(*last))
        {
            b[c]=(*first)*(*first);
            first++;
        }
        else//((*first)*(*first) > (*last)*(*last))
        {
            b[c]=(*last)*(*last);
            last--;
        }
        c--;
    }
    printArray(b,n);
}
void readArray(int a[], int n)
{
    int i;
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int main()
{
    int n,i,j;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    int arr[n];
    readArray(a,n);
    sort(a,n,arr);
}