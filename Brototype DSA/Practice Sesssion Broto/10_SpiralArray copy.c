#include <stdio.h>
void readArray(int a[][100], int n)
{
    int i,j;
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;i<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void printArray(int a[100][100], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
    }
}
int main()
{
    int n,i,j;
    system("clear");
    printf("Enter the number of rows or columns: ");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }   
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        printf("");
    }
    printf("\n");
    for(i=1,j=0;i<n;i++,j++)
    {
        b[1][j]=a[i][3];
    }
    b[1][n-1]=a[n-1][n-2];
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
    }

}
