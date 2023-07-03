#include<stdio.h>
void zigzagTraversal(int a[][4],int m, int n)
{
    int result[m*n];
    result[0] = a[0][0]; 
    int i=0, j=0, k=1;
    while(k < n*m)
    {
        while(i>=1&&j<n-1)
        { 
            i--;
            j++;
            result[k++] = a[j][i];
        }
        if(j<n-1)
        { 
            j++;
            result[k++] = a[j][i];
        }
        else if(i<m-1) 
        { 
            i++;
            result[k++] = a[j][i];
        }
        while(i<m-1&&j>=1) 
        { 
            i++;
            j--;
            result[k++] = a[j][i];
        }
        if(i<m-1)
        { 
            i++;
            result[k++] = a[j][i];
        }
        else if(j<n-1)
        { 
            j++;
            result[k++] = a[j][i];
        }
    }
    for (int i=0; i<m*n; i++)
    {
        printf("%d ",result[i]);
    }
}
int main() 
{
    int m,n,i,j;
    system("clear");
    printf("Enter number of rows of matrix: ");
    scanf("%d",&m);
    printf("Enter number of columns of matrix: ");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter matrix elements\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // int a[4][4] = {1,3,4,10,2,5,9,11,6,8,12,15,7,13,14,16};
    // int m = 4, n = 4;
    zigzagTraversal(a,m,n);

}