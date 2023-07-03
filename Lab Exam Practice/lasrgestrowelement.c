#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10],i,j,m,n,large;
    system("clear");
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        large=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]>large)
            {
                large=a[i][j];
            }
        }
        printf("large = %d\n",large);
    }
    

}