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

void subArrayShort(int a[], int n)
{
    int i,small,large,count=0,flag=0;
    for(i=1;i<n-1;i++)
    {
        if(!(a[i]<a[i+1] && a[i]>a[i-1]))
        {
            small=large=a[i];
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        printf("[%d,%d]",-1,-1);
        exit(0);
    }
    for(i=1;i<n-1;i++)
    {
        if(!(a[i]<a[i+1] && a[i]>a[i-1]))
        {
            if(a[i]<small)
                small=a[i];
            if(a[i]>large)
                large=a[i];
        }
    }
    bubblesort(a,n);
    for(i=1;i<n-1;i++)
    {
        if(a[i]==small)
        {
            printf("[%d,",i);
        }
        else if(a[i]==large)
        {
            printf("%d]",i);
        }
    }

}
int main()
{
    int n;
    system("clear");
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);

    // int n=13;
    // int a[]={1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19};
    // system("clear");

    // int n=5;
    // int a[]={1,2,3,4,5};
    // system("clear");

    subArrayShort(a,n);
}