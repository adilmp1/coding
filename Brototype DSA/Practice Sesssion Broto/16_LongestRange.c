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

void longestRange(int a[], int n)
{
    int i,count=0,c[2],j=0,k=0;
    here: 
    for(i=k;i<n-1;i++)
    {
        if(a[i]+1==a[i+1])
        {
            if(!j)
            {
                c[j]=a[i];
                j++;
            }
            count++;
        }
        else
            break;
    }
    c[1]=a[count];

    printf("[%d,%d]",c[0],c[1]);


}
int main()
{
    int n;
    system("clear");
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);

    // 1,2,3,4,100,200

    // int n=6;
    // int a[]={100, 4, 200, 1, 3, 2};
    // system("clear");

    // int n=12;
    // int a[]={1, 11, 3, 0, 15, 5, 2, 4, 10, 7, 12, 6};
    // system("clear");
    // 0 1 2 3 4 5 6 7 10 11 12 15 

    // int n=10;
    // int a[]={1, 2, 3, 4, 5, 0, 9, 10, 11, 6};
    // system("clear");

    bubblesort(a,n);
    longestRange(a,n);
}