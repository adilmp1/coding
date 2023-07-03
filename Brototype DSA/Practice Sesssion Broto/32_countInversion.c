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
int countInversions(int a[],int n)
{
    int i,j,count=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    // int a[] = {1,2,3};
    // int n=3;

    // int a[] = {6,3,5,2,7};
    // int n=5;
    int n;
    system("clear");
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    printf("%d",countInversions(a,n));
}