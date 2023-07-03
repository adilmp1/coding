#include <stdio.h>
int main()
{
    int a[20][20],m,n,i,j,flag=0;;
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
        for(j=0;j<n;j++)
        {
            if(i!=j && a[i][j]!=0)
            {
                flag=1;
            }
            
        }
    }

    if (flag==0)
    {
        printf("Diagonal matrix");
    }
    else    
        printf("not diagonal");
    


}