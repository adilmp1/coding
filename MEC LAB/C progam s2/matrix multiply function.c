#include <stdio.h>
#include <stdlib.h>
int readmatrix(int x[50][50],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\n\nEnter element a%d%d: ",i+1,j+1);
            scanf("%d",&x[i][j]);
        }
    }
}

int mult(int x[50][50],int y[50][50],int z[50][50],int m,int n,int q)
{
    int i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            z[i][j]=0;
            for(k=0;k<n;k++)
            {
                z[i][j]+=x[i][k]*y[k][j];
            }
        }
    }
}

int printmatrix(int x[50][50],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d  ",x[i][j]);
        }
    }
}
int main()
{
    system("clear");
    int m,n,p,q;
    int a[50][50],b[50][50], c[50][50],i,j,k;
    printf("\nEnter the number of rows of the first matrix: ");
    scanf("%d",&m);
    printf("\nEnter the number of columns of the first matrix: ");
    scanf("%d",&n);
    printf("\nEnter the number of rows of the second matrix: ");
    scanf("%d",&p);
    printf("\nEnter the number of columns of the second matrix: ");
    scanf("%d",&q);

    if(n!=p)
    {
        printf("Cannot Multiply: ");
        exit(0);
    }

    printf("\nEnter the elements of the first matrix: ");
    readmatrix(a,m,n);

    printf("\nEnter the elements of the second matrix: ");
    readmatrix(b,p,q);

    mult(a,b,c,m,n,q);

    printmatrix(c,m,q);



    
    printf("\n\n");
}