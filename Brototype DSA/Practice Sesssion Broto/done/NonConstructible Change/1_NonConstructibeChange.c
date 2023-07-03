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
    int n,ccl=0,i,j;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    bubblesort(a,n);
    for(i=0;i<n;i++)
    {   
        if(a[i]>ccl+1)
        {
            printf("%d",ccl+1);
            exit(0);
        }
        ccl+=a[i];
    }
    printf("%d",ccl+1);
}