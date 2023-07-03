#include <stdio.h>
void readArray(int a[], int n)
{
    int i;
    printf("Enter elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int main()
{
    int n,i,j,k,key;
    system("clear");
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    readArray(a,n);
    printf("Enter key: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==key)
                    printf("\n%d %d %d",a[i],a[j],a[k]);
            }
        }
    }

}