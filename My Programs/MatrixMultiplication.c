#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[50][50],b[50][50],c[50][50],i,j,k;
    int m,n,p,q;
    system("clear");
    printf("Enter the rows of first matrix: ");
    scanf("%d",&m);
    printf("\nEnter the columns of first matrix: ");
    scanf("%d",&n);
    printf("\nEnter the rows of second matrix: ");
    scanf("%d",&p);
    printf("\nEnter the columns of second matrix: ");
    scanf("%d",&q);

    if(n!=p)
    {
        printf("cannot multiply !");
        exit(0);
    }

    printf("Enter the elements of first matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the elements of second matrix: \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("Enter element b%d%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }


    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }

    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
    }



}