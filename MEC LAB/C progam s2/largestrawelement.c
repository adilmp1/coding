#include <stdio.h>
int main()
{
    int n,a[10][10],i,j;
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
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        int large=0;
        for(j=0;j<n;j++)
        {
            if(large<a[i][j])
            {
                large=a[i][j];
            }
        }
        printf("The largest element in the row %d = %d\n\n",i+1,large);
    }
    


} 