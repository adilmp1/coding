#include <stdio.h>
int main()
{
    int m,n,a[10][10],b[10][10],i,j;
    printf("Enter number of rows of matrix: ");
    scanf("%d",&m);
    printf("Enter number of columns of matrix: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter A%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe entered matrix is : \n");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i]=a[i][j];
        }
    }

    printf("\n\nThe Transpsoe of the matrix is : \n");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
    }
}