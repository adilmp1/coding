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
int main()
{
    int n,i,product=1,*p;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n],pro[n];
    readArray(a,n);
    for(i=0;i<n;i++)
    {
        product*=a[i];
    }
    for(i=0;i<n;i++)
    {
        pro[i]=product/a[i];
    }
    printArray(pro,n);
}