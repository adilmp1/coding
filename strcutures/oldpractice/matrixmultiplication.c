#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],i,j,m,n,p,q,k;
    system("clear");
    printf("Enter the number of rows of first matrix: ");
    scanf("%d",&m);
    printf("Enter the number of columns of first matrix: ");
    scanf("%d",&n);
    printf("Enter the number of rows of second matrix: ");
    scanf("%d",&p);
    printf("Enter the number of columns of second matrix: ");
    scanf("%d",&q);

    printf("First Matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Second Matrix\n");

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("Enter b%d%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<p;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<q;j++)
        {
            printf("%d  ",c[i][j]);
        }
    }
    
}