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
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void elementToLast(int a[],int n,int key)
{
    int *first, *last;
    first=a;
    last=a+n-1;
    while(first!=last)
    {
        if(*last==key)
        {
            last--;
        }
        else if(*first==key)
        {
            swap(first,last);
            first++;
        }
        else
        {
            first++;
        }
    }
    printArray(a,n);
}
int main()
{
    int n,key;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    printf("Enter the element you want to put in last: ");
    scanf("%d",&key);
    elementToLast(a,n,key);
}