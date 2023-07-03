#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
int main()
{
    int m,n,i,j,small;
    system("clear");
    int c[2];
    printf("Enter the number of elements of first array: ");
    scanf("%d",&m);
    int a[m];
    readArray(a,m);
    printf("Enter the number of elements of second array: ");
    scanf("%d",&n);
    int b[n];
    readArray(b,n);
    small=abs(b[0]-a[0]);
    small++;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((abs(a[i]-b[j]))<small)
            {
                small=abs(a[i]-b[j]);
                c[0]=a[i];
                c[1]=b[j];
            }
        }
    }
    printf("%d\n%d",c[0],c[1]);
}