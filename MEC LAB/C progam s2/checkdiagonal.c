#include <stdio.h>
int main()
{
    int n,i,j,a[10][10];
    int flag=1;
    printf("Enter the order of the square matrix n: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter A%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j && a[i][j]!=0)
            {
                flag=0;
            }
        }
    }
    if(flag)
        printf("The entered matrix is diagonal");
    else 
        printf("The entered matrix is not diagonal");
}