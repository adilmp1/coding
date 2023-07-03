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
int indexEqualsValue(int a[],int n)
{
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        if(a[i]==i)
        {
            return i;
        }
        if(a[j]==j)
        {
            return j;
        }
    }
    return -1;
}
int main()
{
    int n;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    // int a[]={4,3,2,1},n=4;   
    // int a[]={0,1,2},n=3;
    // int a[]={1,2,3,4,5,6,7,8,9,0},n=10;
    // system("clear");
    printf("%d",indexEqualsValue(a,n));
    
}