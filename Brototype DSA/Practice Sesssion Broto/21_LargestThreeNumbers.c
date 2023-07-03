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
void bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int n;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    bubblesort(a,n);
    printf("[%d, %d, %d]",a[n-3],a[n-2],a[n-1]);
}