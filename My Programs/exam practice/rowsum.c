#include <stdio.h>
#include <stdlib.h>
int rowsum(int str[20][20],int m,int n)
{
    int i,j,sum;
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=str[i][j];
        }
            printf("The sum of elements of row %d = %d\n",i+1,sum);
    }
}
int main()
{
    
    int m,n,a[20][20],i,j;
    system("clear");
    printf("Enter the rows: ");
    scanf("%d",&m);
    printf("Enter the columns: ");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    rowsum(a,m,n);
    

}
