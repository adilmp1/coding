#include <stdio.h>
int main()
{
    int n,a[10][10],i,j;
    int trace=0;
    printf("Enter the order of the square matrix n: ");
    scanf("%d",&n);
    printf("Enter the elements of the matrix: \n");
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
        trace+=a[i][i];
    }
    printf("\nThe trace of the matrix is : %d",trace);
    
        
}