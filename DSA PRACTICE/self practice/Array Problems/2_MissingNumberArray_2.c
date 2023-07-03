#include <stdio.h>
void readArray(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
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
int misselement(int a[],int n)
{
    int i,j;
    for(i=a[0],j=0;j<n-1;i++,j++)
    {
        if(a[j]!=i)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int a[50],n,i,j;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    readArray(a,n-1);
    bubblesort(a,n-1);
    misselement(a,n);
    
}