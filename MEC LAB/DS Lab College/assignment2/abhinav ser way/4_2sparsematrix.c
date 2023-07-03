#include <stdio.h>
typedef struct {
    int col;
    int row;
    int val;
}term;
int main()
{
    term a[100],b[100],sum[100];
    int arr1[10][10],arr2[10][10];
    int i,j,k,m,n,l=0;
    system("clear");
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    printf("Enter first sparse matrix \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter second sparse matrix \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    a[0].row=m;
    a[0].col=n;
    b[0].row=m;
    b[0].col=n;
    j=0,k=1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr1[i][j]!=0)
            {
                a[k].row=i;
                a[k].col=j;
                a[k].val=arr1[i][j];
                k++;
            }
        }
    }
    a[0].val=k-1;
    k=1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr2[i][j]!=0)
            {
                b[k].row=i;
                b[k].col=j;
                b[k].val=arr2[i][j];
                k++;
            }
        }
    }
    b[0].val=k-1;
    i=1,j=0;
    while(i<a[0].val && j<=b[0].val) 
    {
        if(a[i].row>b[j].row)
        {
            sum[l].row = a[i].row;
            sum[l].col = a[i].col;
            sum[l].val = a[i].val;
            i++;
            l++;
        }
        else if(a[i].row < b[j].row)
        {
            sum[l].row = b[j].row;
            sum[l].col = b[j].col;
            sum[l].val = b[j].val;
            j++;
            l++;
        }
        else if(a[i].row == b[j].row && a[i].col == b[j].col)
        {
            sum[l].row = a[i].row;
            sum[l].col = a[i].col;
            sum[l].val = a[i].val+b[j].val;
            i++;
            j++;
            l++;
        }
        if(a[i].row==b[j].row)
        {
            sum[l].row=a[i].row;
            if(a[i].col>b[j].col)
            {
                sum[l].col=a[i].col;
                sum[l].val=a[i].val;
                l++;
                i++;
            }
            else
            {
                sum[l].col = b[j].col;
                sum[l].val = b[j].val;
                l++;
                j++;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        printf("\n%d ",sum[i].row);
        printf("%d ",sum[i].col);
        printf("%d ",sum[i].val);
    }
}