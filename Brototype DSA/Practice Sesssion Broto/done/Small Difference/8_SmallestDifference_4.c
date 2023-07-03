#include <stdio.h>
#include <stdlib.h>
int id=1;
void readArray(int a[], int n)
{
    int i;
    printf("Enter elements of array %d: ",id);id++;
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
void smallest(int a[], int b[], int m, int n)
{
    int *f1,*f2,i=0,j=0,c[2];
    int current=a[m-1]+b[n-1];
    int small=current;
    while(i<m && j<n)
    {
        f1=a+i;
        f2=b+j;
        if(*f1<*f2)
        {
            current=*f2-*f1;            
            i++;
        }
        else if(*f1>*f2)
        {
            current=*f1-*f2;            
            j++;
        }
        else
        {
            printf("[%d,%d]",*f1, *f2);
            exit(0);
        }
        if(small>current)
        {
            small=current;
            c[0]=*f1;
            c[1]=*f2;
        }
    }
    printf("[%d,%d]",c[0],c[1]);
}
int main()
{
    int m,n;
    system("clear");
    printf("Enter the number of elements of first array: ");
    scanf("%d",&m);
    int a[m];
    readArray(a,m);
    printf("Enter the number of elements of second array: ");
    scanf("%d",&n);
    int b[n];
    readArray(b,n);
    bubblesort(a,m);
    bubblesort(b,n);
    smallest(a,b,m,n);
}